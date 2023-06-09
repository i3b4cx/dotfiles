#!/bin/bash

file_path="$1"

killall swaybg
swaybg -i $file_path &
