# TSC2007-Rpi-driver
This repo contains compiled version of TSC2007 / 2003 based touch screen drivers for Rpi (kernel 3.18.7+) (Driver source : https://github.com/osandov/raspi/tree/master/tsc2007)

Source files are kept as a part of this repo for reference. (It makes use of i2c bus no.1, mostly all the rpi use i2c-1. (Rpi revision 1 256 MB makes use of i2c-0)  It also assumes that device address is 0x48 and irq pin of TSC2007 / 2003 is connected to Rpi pin #7 (GPIO4).)

Pre requisites :

1. Make sure you have i2ctools and i2c-dev installed. (for raspbian : sudo apt-get install i2c-dev i2ctools)
2. Follow this guide to enable i2c bus on Rpi if not already enabled. (https://learn.adafruit.com/adafruits-raspberry-pi-lesson-4-gpio-setup/configuring-i2c)


To install : 

1. Download repo zip or git clone.
2. Go to the repo dir.
3. type "sudo make install" (make sure you have all the dependencies installed and i2c bus enabled)
4. reboot


