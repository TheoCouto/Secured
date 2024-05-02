/*
** EPITECH PROJECT, 2023
** Secured
** File description:
** main.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/hashtable.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

// No insert display
Test(ht_dump, empty_ht, .init = redirect_all_std)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_dump(ht);

    cr_assert_stdout_eq_str("[0]:\n[1]:\n[2]:\n[3]:\n");
}

Test(ht_dump, ht_dump_test1, .init = redirect_all_std)
{
    hashtable_t *ht = new_hashtable(&hash, 4);

    ht_insert(ht, "Vision", "./Documents/Tournament/Modules/Vision");
    ht_insert(ht, "Kratos", "./Trash/Hollidays_Pics/.secret_folder/kratos.ai");
    ht_insert(ht, "<3", "+33 6 31 45 61 23 71");
    ht_dump(ht);

    cr_assert_stdout_eq_str("[0]:\n> 628 - ./Trash/Hollidays_Pics/.secret_folder/kratos.ai\n> 632 - ./Documents/Tournament/Modules/Vision\n[1]:\n[2]:\n[3]:\n> 111 - +33 6 31 45 61 23 71\n");
}
