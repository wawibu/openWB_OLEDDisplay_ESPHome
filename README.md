# ESPHome fork of MartinRinas/openWB_OLEDDisplay
This fork is based on Martin Rinas openWB Mini Statusdisplay.

I transferred it to be useable with ESPHome. The ESPHome Version covers only the graphical UI version and supports 2 LPs. Information on LP1 and LP2 are rotating each 5 seconds. 


EPSHome Version exist out of 2 files:
* esp8266-owb-display.yaml

  You need to adjust in row 14 the IP of your openWB Wallbox. 
  Row 22 could be removed if you don't want to force a dedicated IP for the ESP.
  Display shows LP1 and LP2 information based on the rotation invertal set in row 150.
  If only one LP is available, comment row 149 - 153 out and by that only the information on LP1 will be shown.
* esp8266-owb-display-icon.h

  this needs to be stored in the same directory as the yaml file and contains a function to draw the bitmaps. 

---
# openWB_OLEDDisplay
OpenWB status display using ESP8266 and 0.96" OLED Display.
Displays current EVU, PV and combined power of all charging ports plus SoC of charge port 1 and if this charge port is plugged in (P) or charging (C).

Allows OTA updates via integrated WebBrowser on <ip of ESP>/update

Sketch assumes SPI Display, wiring for Wemos D1 & compatible:
* SCL: D1
* SDA: D2
* GND: GND
* VCC: 3.3V

# Configuration
You need to enter SSID, PW and IP of openWB in .ino source file

# Example
![Screenshot of Display](images/Display1.jpg)

# Graphic Symbols
add #define UI_GRAPHIC_STYLE to change from text output to some grafic output. There are symbols added for Energy import|export and for status of the charge port unplugged|plugged|charging.
The text was moved to fit better on screen and give some space for the grafics. Output is in Watt (W) if less then 1000W and in kilo Watt (kW) if more or equal 1000W. if its above 10 kW it shows only 2 position after decimal point.

# Examples for Graphic Symbols
Example plugged car
![Screenshot of Display](images/Display_example_1.jpg)

Example for charging car
![Screenshot of Display](images/Display_example_2.jpg)

Symbols:
Import of energy
![Screenshot of Display](images/Display_import.jpg)

Export of energy
![Screenshot of Display](images/Display_export.jpg)

Unplugged
![Screenshot of Display](images/Display_unplugged.jpg)

Plugged
![Screenshot of Display](images/Display_plugged.jpg)

Charging
![Screenshot of Display](images/Display_charging.jpg)
