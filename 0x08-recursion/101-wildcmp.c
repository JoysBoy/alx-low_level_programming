/**
 * wildcmp - compares two strings and returns 1 if the strings can be considered
 * identical, otherwise returns 0.
 * @s1: pointer to first string
 * @s2: pointer to second string (may contain wildcard '*')
 *
 * Return: 1 if strings are identical, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* Base case */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* Special case */
    	if (*s2 == '*')
	{
	if (*s1 == '\0')
		return (wildcmp(s1, s2 + 1));

	return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	/* General case */
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

   	return (0);
}
