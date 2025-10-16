/*The program is the solution of codeforces problem no. 2014A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 16-10-2025*/

#include <stdio.h>

int main()
{
    int test, n, k, l = 0, take_away = 0, count = 0;
    scanf("%d", &test);
    for (int i = 0; i < test; i++)
    {
        scanf("%d %d", &n, &k);
        int arr[n];

        // taking input of belongings of the persons and finding the total
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[j]);
        }
        // checking the threshold, taking away the belongings and distributing the collected amount
        while (l < n)
        {
            if (arr[l] >= k)
                take_away += arr[l];

            else if (arr[l] == 0 && take_away>0)
            {
                take_away--;
                count++;
            }
            l++;
        }
        l = 0;

        // calculating how many distributed
        printf("%d\n",count);
        take_away = 0;
        count = 0;
    }
    return 0;
}