/*Program to print all the perfect numbers within a given range
Name: Sandipan Ray
Regn. No.:2025CA085
Program Date: 28-09-2025    */

#include<stdio.h>
int main() {
    int sum=0,num1,num2;
    printf ("Enter the range: ");
    scanf ("%d %d",&num1,&num2);
    printf ("The perfect numbers are: \n");
    while (num1<num2) {
        for (int i=1;i<num1;i++) {
                if (num1%i==0)
                    sum+=i;
        }
        if (num1==sum)
            printf ("%d ",num1);
        sum=0;
        num1++; 
    }
}