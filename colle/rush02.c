int	rush(int x, int y);
int	ft_putchar(char c);

int	rush(int x,int y)
{
    int	k;
    k = 0;
    int l;
    int r;
    int c;
    r = y - 1;
    c = x -1;
    while (k < y)
	{
        l = 0;
        while (l < x)
        {
            if(((k == 0 && l == 0)) || (k == 0 && l == c))
            {
                ft_putchar('A');
            }
			else if ((k == r && l == 0) || (l == c && k == r))
            {
                ft_putchar('C');
            }
			else if(((k == (y -1)) || (k == 0)))
            {
                ft_putchar('B');
            }
			else if((k != 0 || k != r) && (l == 0 || l == c))
            {
                ft_putchar('B');
            }
			else if((k != 0 && k != (y -1)) && (l != (x - 1)))
            {
                ft_putchar(' ');
            }
            l++;
        }
        ft_putchar('\n');
        k++;
    }
    return 0;
}
