/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *str = strdup("Salut\n");

    str[2] = 'H';
    free(str);
    str[2] = 'H';
    return 0;
}
