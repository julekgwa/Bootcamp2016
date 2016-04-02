#include	<stdio.h>


int	ft_atoi(char *str)
{
	int	i;
	int	res;
	int	num;

	i = 0;
	res = 0;
	while(str[i] != '\0')
	{
		num = (str[i] - '0' + 48);
		if(num >= 48 && num <= 57)
		{
			res = res * 10 + str[i] - '0';
		}
		else
			str[i + 1] = '\0';
		i++;
	}
	return (res);
}

int	main()
{
	char st[] = "8-90hftf";
	printf("%d", ft_atoi(st));
	return 0;
}
