#include "main.h"
/**
 * _isupper - upper case or not
 * @c: para
 * Return: is upper(1) if not (0)
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
