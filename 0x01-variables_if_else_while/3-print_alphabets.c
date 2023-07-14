#include <stdio.h>
/**
 * main - main block
 *
 * Description: Uses putchar to print the alphabet in lowercase
 * and then in upper case
 *
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	char t = 'A';

	while (t <= Z)
		putchar(t);
		t++;
	)

	putchar('\n');
	
	return (0);
}
