/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/hashtable.h"

// ----------------- ERROR HANDLING -----------------
// If ht == NULL
Test(ht_insert, insert_ht_null)
{
    hashtable_t *ht = NULL;

    cr_assert_eq(ht_insert(ht, "Vision", "./Documents/Tournament/Modules/Vision"), 84);
}

// If key == NULL
Test(ht_insert, insert_key_null)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, NULL, "./Documents/Tournament/Modules/Vision"), 84);
}

// If value == NULL
Test(ht_insert, insert_value_null)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, "Vision", NULL), 84);
}

// If strlen(key) == 0
Test(ht_insert, insert_key_len)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, "", "./Documents/Tournament/Modules/Vision"), 84);
}

// If strlen(value) == 0
Test(ht_insert, insert_value_len)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, "Vision", ""), 84);
}

// ----------------- NORMAL INSERT -----------------
Test(ht_insert, insert_value1)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, "01", "./Documents/Tournament/Modules/Vision"), 0);
}

Test(ht_insert, insert_value2)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    cr_assert_eq(ht_insert(ht, "01", "./Documents/Tournament/Modules/Vision"), 0);
    cr_assert_eq(ht_insert(ht, "02", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai"), 0);
}
