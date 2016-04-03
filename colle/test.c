#include <stdio.h>


void	rush(int x, y)
{
	int wide;
	int len;

	len = 1;
	while(len < y)
	{
		wide = 1;
		while(wide < x)
		{
			if (wide == 1 || wide == x)
			{
				if (len == 1 || wide == x)
					printf("%c", 'o');
				else
					printf("%c", '-');
			}
			else
			{
				
			}
		}
	}
}