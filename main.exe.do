#!bash
FNAME=$1
BNAME=$2
TNAME=$3

CC=gcc
objs="obj/cterm.o"

redo-ifchange ${objs}
$CC -o ${TNAME} src/main.c ${objs}
