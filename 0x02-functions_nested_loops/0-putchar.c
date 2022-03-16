#include "main.h"
#include <string.h>

/**
 * main - entry
 *
 * Return: 0
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
