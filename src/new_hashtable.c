/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include "../include/hashtable.h"

static int handling_new_ht(hashtable_t *ht, int (*hash)(char *, int), int len)
{
    if (ht == NULL) {
        return -1;
    }
    if (hash == NULL) {
        return -1;
    }
    if (len <= 0 || len > 2147483647) {
        return -1;
    }
    return 0;
}

hashtable_t *new_hashtable(int (*hash)(char *, int), int len)
{
    hashtable_t *ht = (hashtable_t *)malloc(sizeof(hashtable_t));

    if (handling_new_ht(ht, hash, len) == -1) {
        return NULL;
    }
    ht->hash = hash;
    ht->size = len;
    ht->table = malloc(sizeof(hashentry_t *) * len);
    for (int i = 0; i < len; i++)
        ht->table[i] = NULL;
    return ht;
}
