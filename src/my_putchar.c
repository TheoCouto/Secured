/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** Nice
*/

#include <unistd.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}
