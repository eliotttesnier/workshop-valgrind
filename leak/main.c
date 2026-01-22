/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

#include <stdlib.h>
#include <string.h>

typedef struct node_s {
    char *data;
    struct node_s *next;
} node_t;

void create_definitely_lost(void)
{
    int *definitely_lost = malloc(sizeof(int) * 10);

    if (definitely_lost == NULL) {
        return;
    }
    for (int i = 0; i < 10; i++) {
        definitely_lost[i] = i;
    }
}

void create_indirectly_lost(void)
{
    node_t *head = malloc(sizeof(node_t));

    if (head == NULL) {
        return;
    }
    head->data = malloc(sizeof(char) * 30);
    if (head->data == NULL) {
        free(head);
        return;
    }
    strcpy(head->data, "Hello, indirect leak!");
    head->next = NULL;
    head = NULL;
}

int main(void)
{
    create_definitely_lost();
    create_indirectly_lost();
    return 0;
}
