/**
 * _sqrt - Finds the square root of a number.
 *
 * @n: The number to calculate the square root of.
 * @i: The divisor.
 *
 * Return: The square root of @n, if @n doesn't have a natural square root,
 * return -1.
 */
int _sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);

	if (i * i == n)
		return (i);

	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 *
 * @n: The number to calculate the square root of.
 *
 * Return: The natural square root of @n, if @n doesn't have a natural square root,
 * return -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(n, 1));
}
