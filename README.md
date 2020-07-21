# nRF52 Firefly Bootloader

This repository contains the bootloader used in my nRF52 based electric skateboard remote and receiver.

The bootloader is based entirely on the example provided by Nordic Semiconductor. The example can be found in their SDK under "sdk_path\examples\dfu\open_bootloader".

## Usage

The bootloader enables device firmware update (DFU) over USB, by using the "nRF Connect Programmer" application. 
To enter the bootloader simply reset the device by shorting the reset pin (P0.18/RST) to ground. This can be done from the application running on the device by connecting a gpio-pin to the reset pin.

## Compilation

The bootloader can be compiled using the Make-file. This can be done from within Visual Studio Code, after setting up the toolchain. 
