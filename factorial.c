// calculate factorial of the entered number
#include<stdio.h>

int main()

{
    int a,factorial=1;
    printf ("Enter the number whose factorial is required: \n");
    scanf ("%d",&a);
    for (int i=1; i<=a; i++) {
        factorial*=i;
    }    
    printf ("The factorial of the number is: %d", factorial);
    return 0;
}