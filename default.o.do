#!bash
FNAME=$1
BNAME=$2
TNAME=$3

CC=gcc
CFLAGS=

redo-ifchange ${BNAME}.c ${BNAME}.h
$CC $CLFAGS $LDFLAGS -o ${TNAME} -c ../${BNAME}.c
