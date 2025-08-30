//Swap the last two numbers and print the middle numbers as it is
#include <stdio.h>
int main()  {
    int i,j,n,a;
    printf("How many nos do you want to enter?  \n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter number(enter one by one each digit followed by enter): \n");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    a=arr[i-1]; //as by the end of the loop i has already increased by 1
    arr[i-1]=arr[0];
    arr[0]=a;
    printf("The desired result: \n");
   for (j=0;j<n ;j++) {
        printf ("%d \n",arr[j]);
   }
    return 0;
}


