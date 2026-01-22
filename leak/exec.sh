##
## EPITECH PROJECT, 2026
## workshop-valgrind
## File description:
## exec
##

#!/bin/bash

if command -v epiclang &> /dev/null; then
    COMPILER="epiclang"
else
    COMPILER="gcc"
fi

echo "Compiling with $COMPILER..."
$COMPILER -g main.c -o main

echo -e "\033[34mRunning: valgrind --leak-check=full --track-origins=yes ./main\033[0m"
valgrind --leak-check=full --track-origins=yes ./main
echo -e "\033[34mFinished running valgrind --leak-check=full --track-origins=yes ./main\033[0m"

rm -rf main
