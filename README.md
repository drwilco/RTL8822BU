# RTL8822BU

## About

This repository contains drivers for the RTL8822BU chipset, updated to
work with Linux 4.9, the current kernel version for Raspbian.

It is based off of the Edimax EW-7822ULC driver, version 1.0.0.9, which
in turn seems to be based on Realtek's 88x2BU driver version 5.1.7. The
Edimax driver was downloaded from
http://www.edimax.com/edimax/mw/cufiles/files/download/Driver_Utility/EW-7822ULC_Linux_Driver_1.0.0.9.zip

It comes with support for the Bluetooth component, but the EW-7822ULC
does not seem to support it, so it's disabled by default. You can set
`CONFIG_BT_COEXIST` to `y` to flip it back on.

If you want to compile this on x86, edit the Makefile and set
`CONFIG_PLATFORM_I386_PC` to `y` and `CONFIG_PLATFORM_ARM_GENERIC` to `n`

DKMS stuff was gleaned from https://github.com/diederikdehaas/rtl8812AU/

## Installation

### Using DKMS

DKMS will make sure the driver is recompiled with each new kernel version
that gets installed and is the least effort over all.

There is a simple make target to configure DKMS with the driver source, 
build it, and install it:

```
sudo make dkms-install
```

### Without DKMS

Simply run the following commands:

```
make
sudo make install
```

