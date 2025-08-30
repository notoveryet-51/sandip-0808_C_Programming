//Find the sum of digits at both ends of a number
#include <stdio.h>
int main()  {
    int i,a,firstnumber,secondnumber;
    printf("Enter a number: \n");
    scanf("%d",&a);
    secondnumber= a%10; // extracts the remainder
    i=10;
    do {
        a=a/i; 
        if (a<10)
            break; // we force out of the loop else it would continue till the result is 0 and print it after completing the loop
    } while (a!=0); //for equal to 0 the condition becomes false and the loop ends in the first iteration itself
    firstnumber=a;
    printf("The sum of first digit and last digit is %d",firstnumber+secondnumber);
    return 0;
}