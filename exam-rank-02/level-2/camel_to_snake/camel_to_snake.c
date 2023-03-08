#include <stdlib.h>
#include <unistd.h>

void    ft_putchar(char character)
{
    write(1, &character, 1);
}

char    to_lowercase(char c)
{
    return (c + 32);
}

int ft_strlen_snake(char *string)
{
    int len;
    int i;

    len = 0;
    i = 0;
    while (string[i])
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            len += 2;
        else
            len++;
        i++;
    }
    return (len);
}

int main(int argc, char **argv)
{
    char    *string;
    int i;

    i = 0;
    (void)string;
    if (argc == 2)
    {
        string = (char *)malloc(ft_strlen_snake(argv[1]) * sizeof(char));
        while (argv[1][i])
        {
            if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                ft_putchar('_');
                ft_putchar(to_lowercase(argv[1][i]));
            }
            else
                ft_putchar(argv[1][i]);
            i++;
        }
    }
    ft_putchar('\n');
    return (0);
}