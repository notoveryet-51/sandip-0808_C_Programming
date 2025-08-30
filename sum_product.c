// calculate sum and product of all digits entered
#include<stdio.h>

int main()

{
    int a,i=10,sum=0,product=1,p;
    printf ("Enter a number: \n");
    scanf ("%d",&a);
    do {
        p=a%i;
        a=a/i;
        sum+=p;
        product*=p;
    } while (a!=0);  
    printf("The sum of digits is = %d \n", sum);
    printf("The product of digits is = %d", product);  
    return 0;
}