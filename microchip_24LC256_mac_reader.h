#ifndef mc24lc256_mac_reader_h
#define mc24lc256_mac_reader_h

#include <Arduino.h>
#include <Wire.h>

#define MC24LC256_MacReader_DEVICE_ADDR 0x50    //Address of 24LC256 eeprom chip

typedef byte mac48[6];

class MC24LC256_MacReader {
  public:
    MC24LC256_MacReader();
    const void readMac(mac48 mac_address) const;
};

#endif
