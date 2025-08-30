// Take input of all the numbers and print the first and last nos only
#include<stdio.h>
int main() {

    int i, n,a,b,c;
    printf("How many nos do you want to enter? \n");
    scanf("%d",&n);
    int arr[n];
    for ( i = 0; i < n; i++)
    {
        printf("Enter number: \n");
        scanf("%d",&arr[i]);
    }
    printf("The first and last nos are %d & %d.",arr[0],arr[i-1]);
    return 0;
    
} 