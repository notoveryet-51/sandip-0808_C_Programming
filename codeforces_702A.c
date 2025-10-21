/*The program is the solution of codeforces problem no. 702A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 21-10-2025    */

#include <stdio.h>

int main()
{
    int n, count = 1,max=1;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    if (n == 1) {
        goto next;
    }
    else
    {
        for (int i = 0; i < n - 1; i++)
        {   
            if (arr[i] < arr[i + 1]) {
                count++; 
                if (count>=max)
                    max=count;
            }
            else if (arr[i] == arr[i + 1]) {
                count=1;
                continue;
            }
            else 
                count=1;
        }
    }
    next:
    printf("%d", max);

    return 0;
}