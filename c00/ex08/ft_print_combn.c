#include <unistd.h>

void    ft_print_combn(int n)
{
    int y;
    char x;
    int j;

    y = 0;
    while (y <= 8)
    {
        j = y + 1;
        while (j <= 9)
        {
            x = y + '0';
            write (1, &x, 1);
            x = j + '0';
            write (1, &x, 1);
            j++;
            if (y != 8)
                write (1, ",", 1);
               write (1, " ", 1);
        }
        y++;
    }
}


