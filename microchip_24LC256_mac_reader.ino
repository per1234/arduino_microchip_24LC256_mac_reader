/**
 * @author Bartłomiej Rapacz
 * Simple library for reading mac address from microchip_24LC256
 */

#include "microchip_24LC256_mac_reader.h"

void setup(void) {
  Serial.begin(9600);
  while (!Serial) {}

  mac48 mac;
  MC24LC256_MacReader().readMac(mac);
  for (size_t i = 0; i < 6; i++) {
    Serial.print(mac[i], HEX);
    Serial.print(i < 5 ? ":" : "\n");
  }
}

void loop() {}
