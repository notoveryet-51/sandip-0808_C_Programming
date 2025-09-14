/* Program to find the gcd of 2 nos
Program Date: 14-09-2025
Name: Sandipan Ray   */

#include <stdio.h>

int main () {
    int a,b,c;
    printf("Enter the two numbers(in ascending order): ");
    scanf ("%d %d",&a,&b);
    do {
        c=a%b;
        if (c==0)
            break;
        a=b;
        b=c;
    } while(c!=0)  ;
    printf("%d",b);
}