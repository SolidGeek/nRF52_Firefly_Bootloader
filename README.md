# nRF52 Firefly Bootloader

This repository contains the bootloader used in my nRF52 based electric skateboard remote and receiver.

The bootloader is based on the "open bootloader" example provided by Nordic Semiconductor. The example can be found in their SDK under "sdk_path\examples\dfu\open_bootloader".

## Usage

The bootloader enables device firmware update (DFU) over USB, by using the "nRF Connect Programmer" application. 
To enter the bootloader two methods can be used:

1. Connect GPIO P0.13 (using DFU button) to ground followed by a device reset (using reset button). 
2. Set the value of the register NRF_POWER->GPREGRET followed by a device reset (ideally done using NVIC_SystemReset()).

## Compilation

The bootloader can be compiled using the Make-file. This can be done from within Visual Studio Code, after setting up the toolchain. 
