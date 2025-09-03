// Determine the prime factors of the given number
#include<stdio.h>
int main()

{
    int a,i;
    printf ("Enter the number: \n");
    scanf ("%d",&a);
    printf ("The factors are: \n");
    for (i=1;i<=a;i++) {
        if (a%i ==0)
            printf ("%d ",i);
    }
    return 0;
}