/*Program to print the user desired number of fibonacci numbers in the series
Program Date: 14-09-2025
Name: Sandipan Ray      */

#include <stdio.h>
int main () {
    int a=0,b=1,c,n;
    printf ("Enter the number of fibonacci numbers you want to print: \n");
    scanf("%d",&n);
    printf ("The fibonacci series of numbers is: \n");
    if (n==1)
        printf ("0\n");
    else if (n==2)
        printf ("0 1\n");
    else {
        printf ("0 1 ");
        for (int i=0; i<n-2; i++) {
            c=a+b;
            a=b;
            b=c;
            printf ("%d ",c);
        }
    }
    return 0;

}
