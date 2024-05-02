/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/hashtable.h"

Test(ht_delete, delete_ht_null)
{
    hashtable_t *ht = NULL;

    cr_assert_eq(ht_delete(ht, "test"), 84);
}

Test(ht_delete, delete_key_null)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_delete(ht, NULL), 84);
}

Test(ht_delete, delete_len_zero)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_delete(ht, ""), 84);
}

Test(delete_node, delete_not_exist)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_insert(ht, "01", "test");
    cr_assert_eq(delete_node(ht, "02"), 84);
    cr_assert_eq(ht_delete(ht, "02"), 0);
}

Test(delete_node, delete_success)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_insert(ht, "01", "test");
    cr_assert_eq(delete_node(ht, "01"), 0);
    cr_assert_eq(ht_delete(ht, "02"), 0);
}
