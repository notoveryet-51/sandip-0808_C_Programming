/*The program is the solution of codeforces problem no. 467A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 23-10-2025    */

#include <stdio.h>

int main () {
    int t,count=0;
    scanf ("%d",&t);
    for (int i=0; i<t; i++) {
        int a,b;
        scanf ("%d %d",&a,&b);
        int diff=b-a;
        if (diff>=2)
            count++;
    }
    printf ("%d",count);
    return 0;
}