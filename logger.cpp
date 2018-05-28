#include "logger.h"


void getMemStruct(){
  extern int __heap_start, *__brkval; 
  SERIAL_LOGGER(String("__brkval addr: ")+GET_HEX_PTR(__brkval));
  SERIAL_LOGGER(String("__heap_start addr: ")+GET_HEX_PTR(&__heap_start));
}
