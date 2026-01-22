/*
** EPITECH PROJECT, 2026
** workshop-valgrind
** File description:
** main
*/

void recursive_function(int nb)
{
    if (nb < 0) {
        return;
    }
    recursive_function(nb);
}

int main(void)
{
    recursive_function(15);
    return 0;
}
