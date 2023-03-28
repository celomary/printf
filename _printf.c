#include "main.h"

/**
 * skip_whitespace - function that skip white space that comes after %
 *
 * @format: format to check for white space
 * @iterator: pointer to current position in the format
 * Return: nothing
 */
void	skip_whitespace(const char *format, int *iterator)
{
	while (format[++(*iterator)] == ' ')
	;
}
/**
 * _printf - function that produce output according to the format
 *
 * @format: the format to follow
 * Return: the length of printed args
 */
int	_printf(const char *format, ...)
{
	va_list ap;
	int		printed;
	int		iterator;

	if (format == NULL)
		return (-1);
	printed = 0;
	iterator = 0;
	va_start(ap, format);
	while (format[iterator])
	{
		if (format[iterator] == '%')
		{
			skip_whitespace(format, &iterator);
			if (_is_inset(format[iterator], AVAILABLE_CONVERSION))
				printed += _conversion_handler(&ap, format[iterator]);
			else
			{
				if (format[iterator] == '\0')
					return (-1);
				_putchar('%');
				_putchar(format[iterator]);
				printed += 2;
			}
		}
		else
		{
			_putchar(format[iterator]);
			printed++;
		}
		iterator++;
	}
	va_end(ap);
	return (printed);
}
