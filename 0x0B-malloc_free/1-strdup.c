#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to copy
 *
 * Return: a pointer to the newly allocated memory
 */
char *_strdup(char *str)
{
    if (str == NULL)
        return NULL;
    unsigned int len = 0;
    while (str[len])
        len++;
    char *copy = malloc(sizeof(char) * (len + 1));
    if (copy == NULL)
        return NULL;
    for (unsigned int i = 0; i <= len; i++)
        copy[i] = str[i];
    return copy;
}
