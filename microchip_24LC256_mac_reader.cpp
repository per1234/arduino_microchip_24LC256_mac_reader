#include "microchip_24LC256_mac_reader.h"


MC24LC256_MacReader::MC24LC256_MacReader() {
  Wire.begin();
}

const void MC24LC256_MacReader::readMac(mac48 mac_address) const {
  Wire.beginTransmission(MC24LC256_MacReader_DEVICE_ADDR);
  Wire.write(0xFA);
  Wire.endTransmission();

  Wire.requestFrom(MC24LC256_MacReader_DEVICE_ADDR, 6);
  for (size_t i = 0; i < 6 && Wire.available(); i++)
    mac_address[i] = Wire.read();
}
