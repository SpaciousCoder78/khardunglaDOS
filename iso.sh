#!/bin/sh
set -e
. ./build.sh

mkdir -p isodir
mkdir -p isodir/boot
mkdir -p isodir/boot/grub

cp sysroot/boot/literados.kernel isodir/boot/literados.kernel
cat > isodir/boot/grub/grub.cfg << EOF
menuentry "literados" {
	multiboot /boot/literados.kernel
}
EOF
grub-mkrescue -o literados.iso isodir