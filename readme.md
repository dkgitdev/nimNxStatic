nimNxStatic
===========

    Example of how to integrate static library into nim

This is a sample sixaxis project from DEVKITPRO with one minor tweak:
it says "hello" using static library coded in nim!

The initial commit in this repo is the example project with no changes.

The `8f9c251e3e2c15c1ce0e540cfae5f23265a8ef06` commit adds a static library file,
built with switch_build.

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
