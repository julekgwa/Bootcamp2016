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
                ft_putchar('o');
            }
            else if ((k == r && l == 0) || (l == c && k == r))
            {
                ft_putchar('o');
            }
            else if(((k == r) || (k == 0)))
            {
                ft_putchar('-');
            }
            else if((k != 0 || k != r) && (l == 0 || l == c))
            {
                ft_putchar('|');
            }
            else if((k != 0 && k != r) && (l != c))
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
