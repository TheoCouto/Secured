/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/hashtable.h"

void redirect_all_std2(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(ht_search, search_ht_null, .init = redirect_all_std2)
{
    hashtable_t *ht = NULL;

    cr_assert_eq(ht_search(ht, "test"), NULL);
}

Test(ht_search, search_key_null, .init = redirect_all_std2)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_search(ht, NULL), NULL);
}

Test(ht_search, search_len_zero, .init = redirect_all_std2)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_search(ht, ""), NULL);
}

Test(ht_search, search_not_found, .init = redirect_all_std2)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_search(ht, "test"), NULL);
}
