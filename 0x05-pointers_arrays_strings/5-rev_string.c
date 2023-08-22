#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: the string
 */

void rev_string(char *s)
{
	int length;
	int strt;
	int e;
	int ts;

	length = 0;
	while (s[length] != '\0')
		length++;
	strt = 0;
	e = length - 1;
	while (strt < e)
	{
		ts = s[strt];
		s[strt] = s[e];
		s[e] = ts;
		strt++;
		e--
	}
}
