# Mean filter

**_Buffer_** type can be:
 - `uint8_t` or `int8_t` with maximum buffer length of **16843009**
 - `uint16_t` or `int16_t` with maximum buffer length of **65537**
 - `uint32_t` or `int32_t` but added number can be as long as 30 bits which eaquals to maximum buffer length of **2**, 29 bits number = max buffer length of **4**, etc.

## Mbed example
```cpp
#include "mbed.h"
#include "MeanFilter.h"

// Buffer (and added samples) will be initialised as uint8_t, total 3 samples
MeanFilter <uint8_t, 3> filter;

int main() {
    printf("result: %u\n", filter.add(255)); // insert new number and get result
    printf("result: %u\n", filter.add(6)); // insert new number and get result
    printf("result: %u\n", filter.add(9)); // insert new number and get result
    printf("result: %u\n", filter.get()); // get last result, without adding a newone

    return 0;
}
```
## Arduino example
```cpp
#include "MeanFilter.h"

// Buffer (and added samples) will be initialised as uint8_t, total 16 samples
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
```

### Output
> result: 255
> 
> result: 172
> 
> result: 90
> 
> result: 90
