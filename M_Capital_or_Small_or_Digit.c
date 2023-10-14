#include <stdio.h>
int main()
{
    char a;
    scanf("%c", &a);

    if (a >= '0' && a <= '9')
    {
        printf("IS DIGIT\n");
    }

    else if (a >= 'a' && a <= 'z')
    {
        printf("ALPHA\nIS SMALL");
    }

    else if (a >= 'A' && a <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }

    return 0;
}