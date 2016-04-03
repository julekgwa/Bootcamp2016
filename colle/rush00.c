int	ft_putchar(char c);

void	rush(int x,int y)
{
    int row;
    int col;

    row = 1;
    if (x > 0 && y > 0)
    {
        while (row <= y)
        {
            col = 1;
            while (col <= x)
            {
                if((row == 1 || row == y) && (col == 1 || col == x))
                    ft_putchar('o');
                else if(((row == 1) || (row == y)))
                    ft_putchar('-');
                else if((row != 1 || row != y) && (col == 1 || col == x))
                    ft_putchar('|');
                else if((row != 1 && row != y) && (col != x))
                    ft_putchar(' ');
                col++;
            }
            ft_putchar('\n');
            row++;
        }
    }
}
