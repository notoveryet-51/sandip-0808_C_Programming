/* Program to check whether the entered number is prime or not
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>
int main() {
    int a,count=0;
    printf("Enter the number: ");
    scanf("%d",&a);
    if (a==1)
        printf("\n1 is not a prime number");
    else {
        for (int i=2; i<=a/2; i++) {
            if (a%i==0)
                count++;
        }

        if (count==0)
            printf("\n%d is a Prime number.",a);
        else
            printf("\n%d is a non prime number.",a);
    }
}