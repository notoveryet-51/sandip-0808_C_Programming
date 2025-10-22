/*The program is the solution of codeforces problem no. 492A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 22-10-2025    */

#include <stdio.h>

int main () {
    int n,count=0,sum=0,i=1,store=0;
    scanf ("%d",&n);
    while (sum<=n) {
        store+=i; //incrementing the sum i.e 1,1+2,1+2+3...
        sum+=store; //summing the sum i.e 1+3+6+10...
        i++;
        count++;
    }
    printf ("%d",count-1);
    return 0;
}