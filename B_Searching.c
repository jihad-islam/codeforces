#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int arr[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int j;
    scanf("%d", &j);

    int put = 0;

    for (i = 0; i < n; i++)
    {
        if (j == arr[i])
        {
            put++;
            printf("%d", i);
            break;
        }
    }

    if (put == 0)
        printf("-1");

    return 0;
}
