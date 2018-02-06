#!/bin/bash

python reset.py /dev/ttyACM0
sleep 2
avrdude -C /usr/share/arduino/hardware/tools/avrdude.conf -p atmega32u4 -c avr109 -P /dev/ttyACM0 -b 57600 -D -U flash:w:gh60_lufa.hex:i

