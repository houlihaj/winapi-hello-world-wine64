winapi-hello-world-wine64
===================

A Simple WinAPI Hello World Window Application cross-compiled for Windows OS on Debian/Ubuntu.

## Introduction

Using Ubuntu 24.04, [mingw-w64](https://www.mingw-w64.org/getting-started/debian/), and [wine64](https://www.winehq.org/).

### Dependencies

```bash 
sudo apt install mingw-w64 \
    mingw-w64-x86-64-dev \ 
    wine64 \
    build-essential
```

### Build

``` bash
make
```

Run ```make clean ```, then ```make``` to rebuild from scratch.

### Run

```
wine main.exe
```

