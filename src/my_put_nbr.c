/*
** EPITECH PROJECT, 2023
** my_put_nbr
** File description:
** A function that displays the number given as a parameter.
** It must be able to display all the possible values of an int.
*/

#include "../include/hashtable.h"

int my_nbr(int nb)
{
    int nbr = nb % 10;

    nb = nb / 10;
    if (nb != 0){
        my_nbr(nb);
    }
    my_putchar(nbr + 48);
}

int my_put_nbr(int nb)
{
    if (nb > 2147483647 || nb < -2147483647) {
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = -1 * nb;
        my_nbr(nb);
    } else {
        my_nbr(nb);
    }
}
/*
int my_put_nbr(int nb)
{
    if (nb == -2147483648){
        my_putstr("-2147483648");
    }
    if (nb < 0){
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10){
        my_put_nbr(nb / 10);
    }
    my_putchar(nb % 10 + '0');
}
*/
