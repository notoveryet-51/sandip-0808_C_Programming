/* Program to print the sum of last n digits of a number
Program Date:28-09-2025
Regn No.: 2025CA085
Name: Sandipan Ray                  */
#include<stdio.h>

int main () {
    int n,sum=0,a;
    long num;
    printf("Enter a number: ");
    scanf ("%ld",&num);
    long b=num;
    printf ("Enter upto how many digits you want the sum from the last :");
    scanf ("%d",&n);
    for (int i=1;i<=n;i++) {
        a=num%10;
        num=num/10;
        sum+=a;
    }
    printf ("The required sum of last %d digits of the number %ld is : %d",n,b,sum);
    return 0;

}