/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

int delete_node(hashtable_t *ht, char *key)
{
    int index = ht->hash(key, my_strlen(key)) % ht->size;
    hashentry_t *current = ht->table[index];
    hashentry_t *prev = NULL;

    while (current != NULL && my_strcmp(current->key, key) != 0) {
        prev = current;
        current = current->next;
    }
    if (current != NULL) {
        if (prev != NULL)
            prev->next = current->next;
        else
            ht->table[index] = current->next;
        free(current->key);
        free(current->value);
        free(current);
        return 0;
    } else {
        return 84;
    }
}

int ht_delete(hashtable_t *ht, char *key)
{
    if (ht == NULL || key == NULL || my_strlen(key) == 0)
        return 84;
    delete_node(ht, key);
    return 0;
}
