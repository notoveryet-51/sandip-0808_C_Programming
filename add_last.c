// Find the sum of last 2 digits of a number
#include <stdio.h>
int main () {
    int a,b,c;
    printf("Enter the number: \n");
    scanf ("%d",&a);
    b=a%10;
    a=a/10;
    c=a%10;
    printf ("The sum of the last 2 nos. is %d",c+b);
    return 0;
}