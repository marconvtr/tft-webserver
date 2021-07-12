[![en](https://img.shields.io/badge/lang-en-red.svg)](https://github.com/marconvtr/tft-webserver/blob/main/README.md)
[![pt-br](https://img.shields.io/badge/lang-pt--br-green.svg)](https://github.com/marconvtr/tft-webserver/blob/main/README.pt-br.md)

## WIP: ESP32 ILI9341 Webserver Experiment

This is a small concept project where I push the limits of an ESP32 trying to fit a lot of heavy routines and protocols.

![the little esp](docs/espinho.jpg)

## Requirements

* esp-idf
* esp32 compatible board
* almost any tft display will work

This project uses an NodeMCU with 4MB flash, a very simple model, nothing special, you can easily use other MCUS by just using 

```
idf.py menuconfig
```

an configuring your PSRAM, clocks, SPI flash, etctera.

## Trying it

just 

```
git clone --recurse-submodules  https://github.com/marconvtr/tft-webserver.git
```

and configure your TFT pins (MOSI, DC, CS, etc) accordingly, via


```
idf.py menuconfig -> components config -> lvgl tft config 
```
default (23 MOSI, 18 CLK, 15 CS, 2 DC 4 RESET)

after everything is ok

```
idf.py build
```

