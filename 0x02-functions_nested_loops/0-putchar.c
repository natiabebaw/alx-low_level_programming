#include "main.h"
#include <string.h>

/**
 * the program prints "_putchar" followed by a new line.
 */
int main(void)
{
	char word[] = "_putchar";
	int i = 0;

	for (i; i < strlen(word); i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
