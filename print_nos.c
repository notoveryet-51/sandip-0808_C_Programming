// print all natural numbers from 1 to n using while loop
#include<stdio.h>

int main()
{
    int n,i=1;
    printf("Enter the total numbers you want to print: \n");
    scanf("%d", &n);
    printf("The numbers are: \n");
    while (i<=n) {
        printf ("%d \n",i);
        i++;
    }    
    return 0;
}