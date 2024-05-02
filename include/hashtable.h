/*
** EPITECH PROJECT, 2023
** B-CPE-110 : Secured
** File description:
** hashtable.h
*/

#ifndef HASHTABLE_H
    #define HASHTABLE_H
    #include <stdio.h>
    #include <stdlib.h>

typedef struct hashentry_s {
    int hash_nb;
    char *key;
    char *value;
    struct hashentry_s *next;
} hashentry_t;

typedef struct hashtable_s {
    int (*hash)(char *, int);
    int size;
    struct hashentry_s **table;
} hashtable_t;

// Hash function
int hash(char *key, int len);

// Create & destroy table
hashtable_t *new_hashtable(int (*hash)(char *, int), int len);
void delete_hashtable(hashtable_t *ht);

// Handle table
int ht_insert(hashtable_t *ht, char *key, char *value);
int ht_delete(hashtable_t *ht, char *key);
char *ht_search(hashtable_t *ht, char *key);
void ht_dump(hashtable_t *ht);

// ht_delete
int delete_node(hashtable_t *ht, char *key);

// Other functions
int my_putchar(char c);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
int my_strlen(char const *str);

#endif /* HASHTABLE_H */
