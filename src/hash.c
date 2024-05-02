/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

int hash(char *key, int len)
{
    int value = 0;

    for (int i = 0; i < len; i++) {
        value += key[i];
    }
    return value;
}
