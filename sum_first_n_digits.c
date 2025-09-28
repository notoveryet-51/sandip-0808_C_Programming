/* Program to print the sum of first n digits of a number
Program Date:28-09-2025
Regn No.: 2025CA085
Name: Sandipan Ray */

#include<stdio.h>
int main () {
    long long n,sum=0,count=0,a,c=1,num;
    
    printf("Enter a number: ");
    scanf ("%lld",&num);
    long long b=num;
    long long d=num;
    printf ("Enter upto how many digits you want the sum from the first :");
    scanf ("%lld",&n);
    while (num!=0) {
        num=num/10;
        count++;
    }
    for (int i=1;i<count;i++){
        c*=10;
    }
    for (int i=1;i<=n;i++) {
        a=b/c;
        sum+=a;
        b=b-a*c;
        c/=10;
    }
    printf ("The required sum of first %lld digits of the number %lld is : %lld",n,d,sum);
    return 0;

}