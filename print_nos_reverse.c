// print all natural numbers from 1 to n in reverse
#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter the total numbers you want to print: \n");
    scanf("%d", &n);
    
    printf("The numbers are: \n");
    do {
        printf ("%d \n",n);
        n--;
    }    while (n!=0);
    return 0;
}