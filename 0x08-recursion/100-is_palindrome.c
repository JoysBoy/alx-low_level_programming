#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string to be measured
 *
 * Return: Length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_palindrome - Helper function to check if string is palindrome
 * @s: string to check
 * @len: length of the string
 *
 * Return: 1 if palindrome, 0 if not
 */
int check_palindrome(char *s, int len)
{
	if (len <= 1)
		return (1);

	if (*s == *(s + len - 1))
		return (check_palindrome(s + 1, len - 2));

	return (0);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen_recursion(s);

	if (len <= 1)
		return (1);

	return (check_palindrome(s, len));
}
