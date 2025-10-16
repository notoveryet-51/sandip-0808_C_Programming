/*The program is the solution of codeforces problem no. 1130A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 16-10-2025*/

#include <stdio.h>

int main () {
    int n,d,count=0;
    scanf ("%d",&n);
    float arr[n];
    for (int i=0; i<n; i++) {
        scanf ("%f",&arr[i]);
    }
    for (int d=-1000; d<=1000;d++) {
        if (d==0)
            continue;
        for (int i=0;i<n;i++) {
            if (arr[i]/d>0) {
                count++;
            }
        }
        if (count>=(n+1)/2) {
            printf ("%d\n",d);
            return 0;
        }
        count=0;
    }
    printf ("0\n");
    return 0;
}