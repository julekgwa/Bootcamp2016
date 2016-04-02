#include	<stdio.h>

char	*ft_strrev(char *str)
{
	int		len;
	int		i;
	char	temp;

	len = 0;
	i = 0;
	while(str[i] != '\0')
	{
		len += 1;
		i++;
	}

	i = 0;
	len -= 1;
	while( i <= len)
	{
		temp  = str[i];
		str[i] = str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return (str);
}

int main(void)
{
	char ts[] = "hello world";
	char *p;
	p = ts;
	printf("%s", ft_strrev(p));
	return (0);
}
