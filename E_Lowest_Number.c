#include <stdio.h>
#include <limits.h>  //header file for INT_MAX and INT_MIN
int main()
{
    int n;
    scanf("%d", &n);
    int i, arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int count =0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            count = i+1;
        }
    }

    printf("%d %d", min, count);

    return 0;
}