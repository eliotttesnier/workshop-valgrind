/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>

int main(void) {
    char *str = malloc(sizeof(char) * 10);

    if (str == NULL) {
        return 1;
    }
    str[10] = 'a';
    free(str);
    return 0;
}
