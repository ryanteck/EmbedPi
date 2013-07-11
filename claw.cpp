#include "arduPi.h"
// Modified Template
int clawLRa = 13;
int clawLRb = 12;

void setup() {

//Normal setup code here
pinMode(clawLRa, OUTPUT);
pinMode(clawLRb, OUTPUT);

digitalWrite(clawLRa, LOW);
digitalWrite(clawLRb, LOW);

}

void loop() {
//Normal Arduino Loop Here

digitalWrite(clawLRa, HIGH);
digitalWrite(clawLRb, LOW);
delay(1000);
digitalWrite(clawLRa, LOW);
digitalWrite(clawLRb, HIGH);
delay(1000);
}



int main (){

setup();

while(1){

loop();

}
