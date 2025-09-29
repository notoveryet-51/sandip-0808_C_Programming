/*Program to check palindromes within a range
Program date: 29-09-2025
Name: Sandipan Ray
Regn. no.: 2025CA085    */

#include <stdio.h>
int main () {
    int num1,num2,b,c,d,f,count=0,e;
    printf ("Enter the range of numbers: \n");
    scanf ("%d %d",&num1,&num2);
    printf ("The palindrome nos. are: \n");
    for (int i=num1+1;i<num2;i++) {
        b=i, e=i; f=i;
        int temp=1,a=1;
        while (f!=0) {
            f/=10;
            count++;
        }
        for (int j=1;j<count;j++) {
            a*=10;
        }
        while (b!=0) {
            c=b/a;
            d=b%10;
            if (c!=d) {
                temp=0;
                break;
            }
            b=b-(c*a);
            b=b/10;
            a/=100;
        }
        if (temp!=0)
            printf ("%d ",e);
        count=0;
    }
}