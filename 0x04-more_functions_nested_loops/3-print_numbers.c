#include "main.h"

/**
*print_numbers - print 0123456789
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	int x;

	for (x = '0'; x < '10'; x++)
		_putchar(x + '0');
	_putchar('\n');
}
