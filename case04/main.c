/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    char *buffer = malloc(sizeof(char) * 10);
    char c = '\0';

    if (buffer == NULL) {
        return 84;
    }
    buffer[0] = 'H';
    buffer[1] = 'e';
    buffer[2] = 'l';
    buffer[3] = 'l';
    buffer[4] = 'o';
    buffer[5] = '\0';
    for (int i = 0; i < 15; i++){
        c = buffer[i];
        printf("Char: %c\n", c);
    }
    free(buffer);
    return 0;
}
