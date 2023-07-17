#include <stdio.h>

/**
 * main - print all possible combination of base-10 digits
 *
 * Return: 0 (Success)
*/

int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; digit++)
	{
		putchar(digit);
		if (digit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}
