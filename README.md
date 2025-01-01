# CANDYK
A candy shop of tools and libraries for PlayStation development

This readme will need to be better fleshed-out. Im also really bad at git

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
4. All you to do now is enter the `candyk-psx` directory and `make`.
5. If you made changes to the libs or tools, do `make tools` and/or `make libs`


## Architecture

### Directories

* `bin/`: Target directory for host-native tools
* `lib/`: Target directory for PlayStation libraries
* `src/`: Source code for PlayStation libraries
* `toolsrc/`: Source code for host-native tools

### Libraries

* `chenboot`: crt0 and interupt bootstrap facilites
* `eyecandy`: a low-level GPU library (HEAVY WIP)
* `orelei`: SPU sound driver
* `sawpads`: joystick driver
* `seedy`: CD-ROM driver

### Tools

* `elf2psx`: a tool that converts a .elf to a .exe file
* `libpsxav`: a library that reads a bunch of Playstation 1 formats
* `pscd-new`: a tool that makes your projects in Disc (bin/cue) format
* `psxavenc`: a tool that converts your files into Playstation 1 formats
* `xainterleave`: a tool that interleaves your .XA file

### Makefile system

TODO: formalise this.

Basically there's a bunch of `target.make` files which are included as needed.

## Notes

### pscd-new notes

This requires a license.dat. Inorder to grab such, grab your legally obtained PS1 game and copy this:
```
dd if=game.bin of=license.dat bs=2352 count=16
```
And then reference that file in manifest.txt under the `lic` variable.

### psxavenc notes

For some, including myself, it wont build because of some misincludes in the offical `libavutil` include.
The way I solved was to git clone the [offical repository](https://github.com/WonderfulToolchain/psxavenc) and follow those steps.

### eyecandy notes

I wanna say its literally a copy and paste from chenboot_triangle. I know it may not work out in the long end but its something.
I do plan on adding some GTE support but my C knowledge is only but so limited, so that might take awhile. PLEASE tell me if something wont work.

### TODO

* Add more examples.
* Add GTE Support for eyecandy.
* Some sort of printf (it exists somewhere).
* Add support for resource packages (e.g. psxfudge, rres, etc. maybe I'm pushing it)
* Add some demos maybe.
* A template.
