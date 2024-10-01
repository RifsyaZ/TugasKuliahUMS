#include "var.h"
#include "Analog.h"
#include "Digital.h"
void setup() {
  pinMode(IN_3, OUTPUT);
  pinMode(IN_4, OUTPUT);
  pinMode(ENA, OUTPUT);
  pinMode(5, INPUT);
  pinMode(12, INPUT);
  pinMode(13, OUTPUT);
  pinMode(8, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  Serial.begin(115200);
}
void loop() {
  Analog();
  //  Digital();
}
