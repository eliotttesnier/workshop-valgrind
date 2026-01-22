/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>

int main(void)
{
    char *str;
    int len;

    for (int i = 0; str[i] != '\0'; i++) {
        len += 1;
    }
    return len;
}
