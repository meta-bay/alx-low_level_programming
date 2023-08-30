#include "main.h"

/**
 * _prime_real - recur
 * @n: the number
 * @r: rec
 * Return: prime real
 */

int _prime_real(int n, int r)
{
	if (r == 1)
		return (1);
	if (n % r == 0 && r > 0)
		return (0);
	return (_prime_real(n, r - 1));
}

/**
 * is_prime_number - prime or not
 * @n: the number
 * Return: p or not
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (_prime_real(n, n - 1));
}

