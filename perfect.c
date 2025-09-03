// Determine if the given number is perfect or not
#include<stdio.h>
int main()

{
    int a,sum=0,i;
    printf ("Enter the number: \n");
    scanf ("%d",&a);
    for (i=1;i<a;i++) {
        if (a%i ==0)
            sum=sum+i;
    }
    if (sum==a)
        printf ("It is a perfect number :)");
    else 
        printf ("It is not a perfect number :(");
    return 0;
}