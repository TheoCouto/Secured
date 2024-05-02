/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

void print_ht(hashtable_t *ht, int i)
{
    hashentry_t *temp = NULL;

    if (ht->table[i] != NULL) {
        temp = ht->table[i];
        while (temp != NULL) {
            my_putstr("> ");
            my_put_nbr(temp->hash_nb);
            my_putstr(" - ");
            my_putstr(temp->value);
            my_putchar('\n');
            temp = temp->next;
        }
    }
}

void ht_dump(hashtable_t *ht)
{
    if (ht != NULL) {
        for (int i = 0; i < ht->size; i++) {
            my_putchar('[');
            my_put_nbr(i);
            my_putstr("]:\n");
            print_ht(ht, i);
        }
    }
}
