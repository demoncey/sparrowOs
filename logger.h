#ifndef LOGGER_H_
#define LOGGER_H_

#include <Arduino.h>

#define INIT_SERIAL_LOGGER Serial.begin(9600);
#define SERIAL_LOGGER(msg) (Serial)?Serial.println((msg)):0
#define GET_UINT_PTR(ptr) (uint16_t)(ptr)
#define GET_HEX_PTR(ptr) String((uint16_t)(ptr),HEX)




void showMemory(){
  extern int __heap_start, *__brkval; 
  SERIAL_LOGGER(String("__brkval addr: ")+GET_HEX_PTR(__brkval));
  SERIAL_LOGGER(String("__heap_start addr: ")+GET_HEX_PTR(&__heap_start));
}
#endif /* LOGGER_H_ */
