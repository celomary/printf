#include "main.h"
#include <stdio.h>
/**
 * _put_number_helper - function helper to put number
 *
 * @number: number to be reverse
 * Return: length of printed number
 */
long int	_put_number_helper(long int number)
{
	int		len;

	if (!number)
		return (0);
	len = _put_number_helper(number / 10);
	_putchar(number % 10 + 48);
	return (1 + len);
}
/**
 * _put_number - function that prints given number
 *
 * @number: number to be printed
 * @is_space: pointer to is space
 * Return: length of the printed number
 */
int		_put_number(long int number, int *is_space)
{
	int	len;

	len = 0;
	if (*is_space && number >= 0)
	{
		_putchar(' ');
		len++;
		*is_space = 0;
	}
	if (number == 0)
	{
		_putchar('0');
		return (1 + len);
	}
	if (number < 0)
	{
		_putchar('-');
		len++;
		number *= -1;
	}
	return (len + _put_number_helper(number));
}
