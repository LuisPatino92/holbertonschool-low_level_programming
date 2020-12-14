#!/bin/bash
gcc *.c -c -fpic &
wait $!
gcc *.o -shared -o libholberton.so &
