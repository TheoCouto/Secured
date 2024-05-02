/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

void delete_hashtable(hashtable_t *ht)
{
    hashentry_t *current;
    hashentry_t *temp;

    if (ht == NULL) {
        return;
    }
    for (int i = 0; i < ht->size; i++) {
        current = ht->table[i];
        while (current != NULL) {
            temp = current;
            current = current->next;
            free(temp->key);
            free(temp->value);
            free(temp);
        }
        ht->table[i] = NULL;
    }
    free(ht->table);
    free(ht);
}
