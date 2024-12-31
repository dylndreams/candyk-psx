### CANDYK
A candy shop of tools and libraries for PlayStation development

This readme will need to be better fleshed-out.

## Licensing

CandyK, as a whole, is licensed under the "zlib license". Please check the LICENSE file for more information.

### Exceptions

Toolchain examples are licensed under the Creative Commons Zero license - feel absolutely free to base your code on them!

## Installation

### Binary

1. Install or compile pacman (the Arch Linux package manager).
2. Append the following to /etc/pacman.conf:

```
[candyk]
Server = http://candyk.asie.pl/repo/x86_64
```

3. `pacman -Syu`
4. `pacman -S candyk-psx`

### Source
1. You will need to install the [Wonderful Toolchain](https://wonderful.asie.pl/docs/getting-started/)
2. Install the MIPS toolchain through wf-pacman: `wf-pacman -S toolchain-gcc-mipsel-elf`
3. Assuming you git cloned this repo, export the MIPS Bin to PATH: `export PATH=/opt/wonderful/toolchain/gcc-mipsel-elf/bin:$PATH`
4. All you to do now is enter the directory and make.
5. If you made changes to the libs or tools, do make tools and/or make libs


## Architecture

### Directories

* `bin/`: Target directory for host-native tools
* `lib/`: Target directory for PlayStation libraries
* `src/`: Source code for PlayStation libraries
* `toolsrc/`: Source code for host-native tools

### Libraries
* `chenboot`: crt0 and interupt bootstrap facilites 
* `orelei`: SPU sound driver
* `sawpads`: joystick driver
* `seedy`: CD-ROM driver

### Makefile system

TODO: formalise this.

Basically there's a bunch of `target.make` files which are included as needed.

