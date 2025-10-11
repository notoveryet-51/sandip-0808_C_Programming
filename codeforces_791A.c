/*The program is the solution of codeforces problem no. 791A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 10-10-2025*/


#include<stdio.h>

int main()
{
    int a,b,count=0;
    scanf("%d %d",&a,&b);
    do {
        a*=3;
        b*=2;
        count++;
    } while (b>=a);
    printf("%d",count);
    return 0;
}