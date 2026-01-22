/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>


int main(void)
{
    void (*function)(void) = (void*)0x123456;

    function();
    return 0;
}
