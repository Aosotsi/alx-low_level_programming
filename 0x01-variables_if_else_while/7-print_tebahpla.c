#include <stdio.h>
/**
 * main - main block
 *
 * Description: Uses putchar to print the alphabet in lowercase
 * and reversed
 *
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c <= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');

	return (0);
}
