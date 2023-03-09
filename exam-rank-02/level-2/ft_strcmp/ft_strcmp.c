#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i])
    {
        if (s1[i] != s2[i])
        {
            if (s1[i] > s2[i])
                return (1);
            else
                return (-1);
        }
        i++;
    }
    return (0);
}

int main(void)
{
    printf("Ma Fonction: %d\n", ft_strcmp("sclut", "salut"));
    printf("La vrai Fonction: %d\n", strcmp("sclut", "salut"));
    return (0);
}