#!/bin/bash
gcc -c *.c &
wait $!
ar -rc liball.a *.o &
wait $!
ranlib liball.a &
