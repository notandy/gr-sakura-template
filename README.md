# C Template supporting offline development for Renesas GR-Sakura on Unix

This Makefile project with a minimalistic blink example can be used to develop offline C/C++ applications for GR-Sakura. It was developed for unixoid operating systems. You just need a gcc crosscompiler for Renesas RX target.

## Requirements
Cross compiler for Renesas RX target, e.g.

### Gentoo
    crossdev -t rx-elf -s4
### Arch
    pacman -S rx-elf-gcc
### OS X/All others
	see https://gist.github.com/graup/5380390
### KPIT GNURX (untested, and only with registration)
	see http://kpitgnutools.com

## Makefile Targets:
1. make all
 - Generates .elf and .bin for deployment on GR-Sakura filesystem
1. make install
 - copy blink.bin to /mnt/GR-SAKURA and unmounts the filesystem
