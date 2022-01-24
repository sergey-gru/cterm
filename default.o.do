#!bash
FNAME=$1
BNAME=$2
TNAME=$3

CC=gcc
CFLAGS=

redo-ifchange ../src/${BNAME}.c ../${BNAME}.h
$CC $CFLAGS $LDFLAGS -o ${TNAME} -c ../src/${BNAME}.c
