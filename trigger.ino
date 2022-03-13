#include <PWM.h>

int32_t frequency = 100;
int CAM_pin = 3; // sets pin D3 for Cam
int EMG_pin = A2; // sets pin D5 for EMG trigger
int SWITCH_pin = 2; 
int value;
int state_EMG = LOW;
int state_CAM = 0; 

void setup()
{
  InitTimersSafe();
  Serial.begin(9600);

  
  pinMode(CAM_pin,OUTPUT);/*declare D3 pin as an output pin */ 
  pinMode(EMG_pin,OUTPUT);/*declare A2 pin as an output pin */ 
  pinMode(SWITCH_pin, INPUT_PULLUP);
  
  analogWrite(CAM_pin,0);
  analogWrite(EMG_pin,0);
  SetPinFrequencySafe(CAM_pin,frequency);
 }
void loop()
{
  value = digitalRead(SWITCH_pin);
  if (value == HIGH) {
//    Serial.println(value);
    pwmWrite(CAM_pin,179);
    //TCCR2B = TCCR2B & B11111000 | B00000110;// set timer 2 divisor to   256 for PWM frequency of   122.55 Hz
    analogWrite(EMG_pin,179);
    Serial.print(digitalRead(EMG_pin));
  }
  else {
//      Serial.println(value);
      pwmWrite(CAM_pin,0);
      //TCCR2B = TCCR2B & B11111000 | B00000110;// set timer 2 divisor to   256 for PWM frequency of   122.55 Hz
      analogWrite(EMG_pin,0);
      Serial.print(digitalRead(EMG_pin));
    }

}
