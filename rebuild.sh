#!/usr/bin/env bash

set -e
rm -rf build
cmake -S . -B build
cmake --build build
mv ./build/src/app/secure_send .

clear
echo "Successfully built"

./secure_send

rm -rf build secure_send
clear
echo "Successfully cleaned"

sleep 1
clear
