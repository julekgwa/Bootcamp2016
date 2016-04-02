int	ft_strlen(char *str)
{
	int	i;
	int	len;
	
	i = 0;
	len = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		len++;
		i++;
	}
	return (len);
}