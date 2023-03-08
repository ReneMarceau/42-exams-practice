#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        switch(argv[2][0])
        {
            case '+':
                printf("%d\n", atoi(argv[1]) + atoi(argv[3]));
                break;
            case '-':
                printf("%d\n", atoi(argv[1]) - atoi(argv[3]));
                break;
            case '*':
                printf("%d\n", atoi(argv[1]) * atoi(argv[3]));
                break;
            case '/':
                printf("%d\n", atoi(argv[1]) / atoi(argv[3]));
                break;
            case '%':
                printf("%d\n", atoi(argv[1]) % atoi(argv[3]));
                break;
            default:
                printf("ERROR...");
                break;
        }
    }
    else
        write(1, "\n", 1);
    return (0);
}