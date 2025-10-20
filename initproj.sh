#!/bin/bash
mkdir $1
date=$(date +%Y/%m/%d)
touch $1/README.md
echo "$1 $date" > $1/README.md
