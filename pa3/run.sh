#!/bin/bash

BASEDIR=$(dirname "$0")
EXE=$BASEDIR/bin/pa3

OUTPUT_PATH=$BASEDIR/output
mkdir -p $OUTPUT_PATH
OUTPUT_FILE=$OUTPUT_PATH/"${1##*/}".out

$EXE $1 $OUTPUT_FILE $2 $3 $4 $5 $6 $7 $8
#gdb --args $EXE $1 $OUTPUT_FILE $2 $3 $4 $5 $6 $7 $8
