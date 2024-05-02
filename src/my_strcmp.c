/*
** EPITECH PROJECT, 2023
** my_strcmp
** File description:
** a function that compare two strings and
** return 0 when they are identical,
** return >0 when the first not_matching char
**  in the first str has a greater ASCII value
**   than the corresponding char in the second str,
** return <0 when its lower ASCII value
*/

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
