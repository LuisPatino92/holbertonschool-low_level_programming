#include "holberton.h"

/**
 *
 *
 *
 *
 *
 *
 */

void times_table(void)
{

	int i, j, num;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++ )
		{

			num = i * j;

			/*print num*/
			if (num < 10)
			{
				_putchar(num + 48);
			}
			else
			{
				_putchar((num / 10) + 48);
				_putchar((num % 10) + 48);
			}

			if (j != 9)
			{

			_putchar(44);
			_putchar(32);

			if ((i * (j + 1))<10)
				_putchar(32);
			}
		}
		_putchar(10);
	}

	return;
}
