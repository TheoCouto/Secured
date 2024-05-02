/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

static int handling_insert(hashtable_t *ht, char *key, char *value)
{
    char *test;

    if (ht == NULL || key == NULL || value == NULL)
        return -1;
    if (my_strlen(key) == 0 || my_strlen(value) == 0)
        return -1;
    test = my_strdup(key);
    if (test == NULL)
        return -1;
    free(test);
    test = my_strdup(value);
    if (test == NULL)
        return -1;
    free(test);
    return 0;
}

int ht_insert(hashtable_t *ht, char *key, char *value)
{
    int index;
    int hash_nb;
    hashentry_t *entry;

    if (handling_insert(ht, key, value) == -1)
        return 84;
    hash_nb = hash(key, my_strlen(key));
    index = hash_nb % ht->size;
    entry = ht->table[index];
    entry = malloc(sizeof(hashentry_t));
    entry->hash_nb = hash_nb;
    entry->key = my_strdup(key);
    entry->value = my_strdup(value);
    entry->next = ht->table[index];
    ht->table[index] = entry;
    return 0;
}
