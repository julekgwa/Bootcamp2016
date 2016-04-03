int	rush(int x, int y);
int	ft_putchar(char c);

int	rush(int x,int y)
{
   int  row;
   int  col;

   row = 1;
    while (row <= y)
	{
        col = 1;
        while (col <= x)
        {
            if(((row == 1 && col == 1)) || (row == 1 && col == x))
                ft_putchar('A');
			else if ((row == y && col == 0) || (col == x && row == y))
                ft_putchar('C');
			else if(((row == (y -1)) || (row == 0)))
                ft_putchar('B');
			else if((row != 0 || row != y) && (col == 0 || col == x))
                ft_putchar('B');
			else if((row != 0 && row != (y -1)) && (col != (x - 1)))
                ft_putchar(' ');
            col++;
        }
        ft_putchar('\n');
        row++;
    }
    return 0;
}
