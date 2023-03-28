#include "printf.h"

/**
 * _is_inset - check wether given character is in set or not
 *
 * @c: the character to look up for
 * @set: set of characters
 * Return: boolean true/false
 */
int	_is_inset(char c, const char *set)
{
	int		iter;

	iter = 0;
	while (set[iter])
	{
		if (set[iter] == c)
			return (1);
		iter++;
	}
	return (0);
}
