#include <stdio.h>

/**
 * main - program that prints all possible different combinations of 2 digits
 * Description: Inventing is a combination of brains and materials.
 * The more brains you use, the less material you need
 * Return: 0
 *
 */

int main(void)
{
	int c = 0;
	int f_d;
	int l_d;

	while (c <= 99)
	{
		f_d = (c / 10 + '0');
		l_d = (c % 10 + '0');

		if (f_d < l_d)
		{
			putchar(f_d);
			putchar(l_d);

			if (c != 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		c++;
	}
putchar('\n');
return (0);
}
