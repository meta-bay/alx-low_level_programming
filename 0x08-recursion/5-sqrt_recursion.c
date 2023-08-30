#include "main.h"

/**
 * _sqrt_real_recursion - real recursion
 * @n: the number
 * @r: para recursion
 * Return: real
 */

int _sqrt_real_recursion(int n, int r)
{
	if (r * r > n)
		return (-1);
	if (r * r == n)
		return (r);
	return (_sqrt_real_recursion(n, r + 1));
}

/**
 * _sqrt_recursion - nat recursion
 * @n: the number
 * Return: recur
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_real_recursion(n, 0));
}

