int	ft_putchar(char c);

void	rush(int x,int y)
{
    int rw;
    int cl;

    rw = 1;
    if (x > 0 && y > 0)
    {
        while (rw <= y)
        {
            cl = 1;
            while (cl <= x)
            {
                if((rw == 1 && cl == 1) || (rw == y && cl == x && (x && y) != 1))
                    ft_putchar('/');
                else if ((rw == 1 && cl == x) || (rw == y && cl == 1))
                    ft_putchar('\\');
                else if((rw == 1) || (cl == 1) || (rw == y) || (cl == x))
                    ft_putchar('*');
                else
                    ft_putchar(' ');
                cl++;
            }
            ft_putchar('\n');
            rw++;
        }
    }
}
