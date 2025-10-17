/*The program is the solution of codeforces problem no. 41A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 16-10-2025    */

#include <stdio.h>

int main () {
    int n,h,width=0;
    scanf ("%d %d",&n,&h);
    int arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%d",&arr[i]);
        if (arr[i]<=h)
            width++;
        else width+=2;
    }
    printf ("%d",width);
    return 0;
}