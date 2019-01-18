#!/bin/bash

BASEDIR=$(dirname "$0")
EXE=$BASEDIR/tool/verify/verify_linux

OUTPUT_PATH=$BASEDIR/output
mkdir -p $OUTPUT_PATH
OUTPUT_FILE=$OUTPUT_PATH/"${1##*/}".out

$EXE $1 $OUTPUT_FILE
