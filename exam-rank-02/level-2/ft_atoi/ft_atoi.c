#include <stdlib.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int res;
    int sign;
    int i;

    sign = 1;
    res = 0;
    i = 0;
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f')
        i++;
    if (str[i] == '-')
    {
        sign *= -1;
        i++;
    }
    while (str[i] && (str[i] >= '0' && str[i] <= '9'))
        res = (res * 10) + (str[i++] - '0');
    return (res * sign);
}

int main(void)
{
    printf("Ma Fonction: %d\n", ft_atoi("123"));
    printf("La vrai Fonction: %d\n", atoi("123"));
    return (0);
}