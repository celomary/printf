#include "printf.h"
/**
 * _reverse_number - reverse the given number and returns it
 *
 * @number: number to be reverse
 * Return: revesed number
 */
long int	_reverse_number(long int number)
{
	long int	reversed_number;

	reversed_number = 0;
	while (number)
	{
		reversed_number = reversed_number * 10 + number % 10;
		number /= 10;
	}
	return (reversed_number);
}
/**
 * _put_number - function that prints given number
 *
 * @number: number to be printed
 * Return: length of the printed number
 */
int		_put_number(long int number)
{
	int		len;

	len = 0;
	if (number == 0)
	{
		_putchar('0');
		return (1);
	}
	if (number < 0)
	{
		_putchar('-');
		len++;
		number *= -1;
	}
	number = _reverse_number(number);
	while (number)
	{
		_putchar(number % 10 + 48);
		number /= 10;
		len++;
	}
	return (len);
}
