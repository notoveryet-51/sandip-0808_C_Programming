#include <stdio.h>

int main()
{
    int t, n, temp;
    scanf("%d", &t);
    
    for (int j = 0; j < t; j++)
    {
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int k = 0; k < n; k++)
        {
            for (int l = k + 1; l < n; l++)
            {
                if (arr[k] > arr[l])
                {
                    temp = arr[k];
                    arr[k] = arr[l];
                    arr[l] = temp;
                }
            }
        }
        printf("%d\n", arr[n - 1]);
    }
    return 0;
}