#include <stdio.h>
#include "printf.h"

int	main(void)
{
	char *format = "hello world %c %s %% %d %i %\n";
	int a = _printf(format, 'm', "mohamed elomary", 0, -452565551);
	int b = printf(format, 'm', "mohamed elomary", 0, -452565551);
	printf("%d %d\n", a, b);
	return (0);
}
