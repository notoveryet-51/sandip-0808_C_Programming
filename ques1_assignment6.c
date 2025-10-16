/* Program to print polite numbers
Name: Sandipan Ray
Regn no.: 2025CA085
Date: 16-10-2025	*/

#include <stdio.h>

int polieFunc (int n)	{
    int sum,k=1,l,count=0;
    if (n==1 || n==2)
    	printf ("I am RUDE!\n");
    else {
    	for (int i=1; i<=(n/2)+1; i++) {
        sum=0;
        for (int j=i; j<=(n/2)+1; j++) {
            l=i;
            sum+=j;
            if (sum==n) {
                count++;
                printf ("%d. ",k);
                do {
                    printf("%d ",l);
                    l++;
                } while (l<=j);
                printf("\n");
                k++;
            }
        }
    }
    if (count==0)
        printf ("I am RUDE!\n");
    }
}
int main ()	{
    int a;
    printf ("Enter a positive number: ");
    scanf ("%d",&a);
    polieFunc(a);
    return 0;
}
