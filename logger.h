#ifndef LOGGER_H_
#define LOGGER_H_


#define INIT_SERIAL_LOGGER Serial.begin(9600);
#define SERIAL_LOGGER(msg) (Serial)?Serial.println((msg)):0
#define GET_UINT_PTR(ptr) (uint16_t)(ptr)
#define LOG_HEX_PTR(ptr) String((uint16_t)(ptr),HEX)
#define LOG_PTR(ptr) String((uint16_t)(ptr),HEX)










#endif /* LOGGER_H_ */