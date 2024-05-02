/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

char *ht_search(hashtable_t *ht, char *key)
{
    int index;
    int hash_nb;
    hashentry_t *temp;

    if (ht == NULL || key == NULL || my_strlen(key) == 0)
        return NULL;
    hash_nb = ht->hash(key, my_strlen(key));
    index = hash_nb % ht->size;
    temp = ht->table[index];
    while (temp != NULL) {
        if (hash_nb == temp->hash_nb) {
            return temp->value;
        }
        temp = temp->next;
    }
    return NULL;
}
