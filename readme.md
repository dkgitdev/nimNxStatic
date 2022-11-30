nimNxStatic
===========

    Example of how to integrate nim static library into existing c code for nintendo homebrew

This is a sample sixaxis project from DEVKITPRO with one minor tweak:
it says "hello" using static library coded in nim!

The initial commit in this repo is the example project with no changes.

The last -- is the project with the sufficient config to build the library

# Usage

To build the app, run

```shell
make
```

To build the library *.a file, run:

```shell
cd nim
nimble install switch_build@0.1.4
switch_build -S toggle.nim
```

The resulted file `nim/build/toggle/libtoggle.a` is a library file.

Screenshot
==========

![HB_Running](https://user-images.githubusercontent.com/36101416/204620253-639a89f7-ecee-4560-aae3-70a5ee4427e5.jpg)
