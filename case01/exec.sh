##
## EPITECH PROJECT, 2026
## workshop-valgrind
## File description:
## exec
##

#!/bin/bash

if command -v clang &> /dev/null; then
    COMPILER="clang"
else
    COMPILER="gcc"
fi

echo "Compiling with $COMPILER..."
$COMPILER main.c -o main

echo -e "\033[34mRunning: valgrind --track-origins=yes ./main\033[0m"
valgrind --track-origins=yes ./main
echo -e "\033[34mFinished running valgrind --track-origins=yes ./main\033[0m"

rm -rf main
