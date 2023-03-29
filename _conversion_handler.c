#include "main.h"

/**
 * _conversion_handler - function that map the input to the correct conversion
 *
 * @ap: struct that hold the information needed by va_arg
 * @conversion: the current conversion
 * @is_space: pointer to is space
 * Return: the length of printed output
 */
int		_conversion_handler(va_list *ap, char conversion, int *is_space)
{
	if (conversion == 'c')
	{
		_putchar(va_arg(*ap, int));
		return (1);
	}
	else if (conversion == 's')
	{
		return (_put_string(va_arg(*ap, char *)));
	}
	else if (conversion == 'd' || conversion == 'i')
	{
		return (_put_number(va_arg(*ap, int), is_space));
	}
	else if (conversion == '%')
	{
		_putchar('%');
		return (1);
	}
	return (0);
}
