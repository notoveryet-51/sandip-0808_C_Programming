// Print the power of a number using loop
#include <stdio.h>
int main () {
    int a,n,b,num=1;
    printf ("Enter the number= ");
    scanf ("%d",&b);
    printf ("Enter the power= ");
    scanf ("%d",&n);
    for (a=1; a<=n; a++) {
        num=num*b;
    }   
    printf("%d",num); 
    return 0;

}