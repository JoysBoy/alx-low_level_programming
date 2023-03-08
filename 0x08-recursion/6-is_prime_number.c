/**
 * is_prime_number - check if a number is a prime number
 * @n: the number to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	int i;

	/* check for base cases */
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);

	/* loop through all numbers from 2 to sqrt(n) */
	for (i = 2; i <= sqrt(n); i++)
    {
	/* if i divides n evenly, n is not a prime number */
	if (n % i == 0)
		return (0);
    }

   	/* if we get here, n is a prime number */
	return (1);
}
