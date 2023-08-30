#include "main.h"

/**
 * if_pal - is it pal
 * @s: the pointer
 * @r: re
 * @length: the length
 * Return: success
 */

int if_pal(char *s, int r, int length)
{
	if (*(s + r) != *(s + length - 1))
		return (0);
	if (r >= length)
		return (1);
	return (if_pal(s, r + 1, length - 1));
}

/**
 * _strlen_recursion - length of the string
 * @s: the pointer
 * Return: the length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - palindrome or not
 * @s: the pointer
 * Return: if it is or not
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (if_pal(s, 0, _strlen_recursion(s)));
}

