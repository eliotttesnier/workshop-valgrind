/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>

int main(void)
{
    char *buffer = malloc(sizeof(char) * 10);
    char *ptr = buffer;

    if (buffer == NULL) {
        return 84;
    }
    buffer[0] = 'H';
    buffer[1] = 'e';
    buffer[2] = 'l';
    buffer[3] = 'l';
    buffer[4] = 'o';
    buffer[5] = '\0';
    while (*ptr) {
        ptr++;
    }
    free(ptr);
    return 0;
}
