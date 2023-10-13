#include "main.h"

/**
 * more_numbers - prints 0 to 14, 10 times
 *
 * Description: prints 0 to 14, 10 times, using _putchar
 */

void more_numbers(void)
{
/*	only use _putchar three times */
	int np1;
	int np2;
	int i = 0;
	int j;
	int num;
	int m_than_9;

	while (i < 10)
	{
		j = 0;
		num = 48;
		m_than_9 = 9;
		while (j <= 14)
		{
			if (num <= 57)
			{
				_putchar(num);
			}
			else
			{
				m_than_9++;
				np1 = m_than_9 % 10;
				np2 = m_than_9 /10;
				/*_putchar('0' + np1 + np2);*/
				_putchar('0' +np2);
				_putchar('0' +np1);
			}

			if (m_than_9 % 10 == 4)
				_putchar('\n');
			j++;
			num++;
		}

		i++; 
	}
}
