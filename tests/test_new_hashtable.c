/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/hashtable.h"

// If hash function is NULL
Test(new_hashtable, new_ht_hash_null)
{
    hashtable_t *ht = new_hashtable(NULL, 4);

    cr_assert_eq(ht, NULL);
}

// If lenght == 0
Test(new_hashtable, new_ht_len_error1)
{
    hashtable_t *ht = new_hashtable(&hash, 0);

    cr_assert_eq(ht, NULL);
}

// If lenght < 0
Test(new_hashtable, new_ht_len_error2)
{
    hashtable_t *ht = new_hashtable(&hash, -10);

    cr_assert_eq(ht, NULL);
}
