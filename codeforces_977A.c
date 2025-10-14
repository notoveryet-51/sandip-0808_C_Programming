/*The program is the solution of codeforces problem no. 977A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 14-10-2025*/

#include <stdio.h>

int main () {
    int n , k;
    scanf ("%d %d",&n,&k);
    for (int i=1; i<=k; i++) {
        if ((n%10)!=0) {
            n-=1;
        }
        else
            n/=10;
    }
    printf("%d",n);
}