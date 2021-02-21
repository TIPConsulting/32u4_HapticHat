#include <Arduino.h>
#define DEBUG true

//using standard ultrasonic distance sensor
//2cm - 4m range

//DEF range sensor values
#define trig 12
#define echo 11
#define distanceInterval 100
unsigned long distLastPoll = 0;
long dur = 0;
long distanceCm = -1;

//DEF active buzzer values
#define buzzer 0
#define buzzerDuration 100
bool buzzerIsOn = false;
unsigned long buzzerLastBeep = 0;
int buzzerInterval = 3000;
unsigned long buzzerLastOn = 0;
unsigned long buzzerLastOff = 0;

//DEF vibrator values
#define vibrate 1
#define vibeDist 20

void HandleDistancePollAndCalc()
{
  if (distanceCm == -1 || (millis() - distLastPoll) > distanceInterval)
  {
    digitalWrite(trig, HIGH);
    delayMicroseconds(10);
    digitalWrite(trig, LOW);

    dur = pulseIn(echo, HIGH);
    distanceCm = (long)(dur * 0.034 / 2.0);

    DEBUG &&Serial.println(String(distanceCm));

    if (distanceCm > 300)
    {
      buzzerInterval = 3000;
    }
    else if (distanceCm > 200)
    {
      buzzerInterval = 2000;
    }
    else if (distanceCm > 100)
    {
      buzzerInterval = 1000;
    }
    else
    {
      buzzerInterval = distanceCm * 10;
    }

    distLastPoll = millis();
  }
}

void HandleBuzzerBeep()
{
  if (!buzzerIsOn && (millis() - buzzerLastOff) > buzzerInterval)
  {
    digitalWrite(buzzer, HIGH);
    buzzerIsOn = true;
    buzzerLastOn = millis();
  }
  else if (buzzerIsOn && (millis() - buzzerLastOn) > buzzerDuration)
  {
    digitalWrite(buzzer, LOW);
    buzzerIsOn = false;
    buzzerLastOff = millis();
  }
}

void setup()
{
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(vibrate, OUTPUT);

  digitalWrite(trig, LOW);
  digitalWrite(buzzer, LOW);
  digitalWrite(vibrate, LOW);
  delayMicroseconds(2);
}

void loop()
{
  HandleDistancePollAndCalc();
  HandleBuzzerBeep();

  if (distanceCm < vibeDist)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    digitalWrite(vibrate, HIGH);
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    digitalWrite(vibrate, LOW);
  }
}
