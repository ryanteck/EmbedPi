#include "arduPi.h"
// Modified Template
int clawLRa = 13;
int clawLRb = 12;

void setup() {

//Normal setup code here
pinMode(clawLRa, OUTPUT);
pinMode(clawLRb, OUTPUT);

digitalWrite(clawLRa, HIGH);
digitalWrite(clawLRb, HIGH);

}

void loop() {
//Normal Arduino Loop Here

int main (){

setup();

while(1){

loop();

}
