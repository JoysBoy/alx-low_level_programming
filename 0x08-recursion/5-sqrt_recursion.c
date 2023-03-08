/**
 * _sqrt_recursion - returns the natural square root of a number.
 *
 * @n: the number to calculate its square root.
 *
 * Return: The natural square root of @n, if @n doesn't have a natural square root,
 *         return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}

/**
 * _sqrt - finds the square root of @n using recursion.
 *
 * @n: the number to calculate its square root.
 * @i: the divisor.
 *
 * Return: The square root of @n, if @n doesn't have a natural square root,
 *         return -1.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}
