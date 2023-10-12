#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int i, arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    long long sum;
    sum = 0;

    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    if (sum < 0)
        sum = sum * -1;

    printf("%lld", sum);

    return 0;
}