#include "MeanFilter.h"

// Buffer (and added samples) will be initialised as uint8_t, total 3 samples
MeanFilter <uint8_t, 3> filter;

void setup(){
    Serial.begin(9600);
    Serial.print("result: ");
    Serial.println(filter.add(255)); // insert new number and get result
    Serial.print("result: ");
    Serial.println(filter.add(6)); // insert new number and get result
    Serial.print("result: ");
    Serial.println(filter.add(9)); // insert new number and get result
    Serial.print("result: ");
    Serial.println(filter.get()); // get last result, without adding a newone
}

void loop(){

}
