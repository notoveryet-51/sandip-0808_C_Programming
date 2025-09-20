/* Program to print all the prime numbers in a given range
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>
int main() {
    int a,b;
    printf("Enter the range: ");
    scanf("%d%d",&a,&b);
    printf("The prime numbers in this range are:\n");
    for (int j=a; j<=b; j++) {
        int count=0;
        if (j<2)
            continue ;
        for (int i=2; i<=j/2; i++) {
            if (j%i==0)
                count++;
        }
        if (count==0)
            printf("%d ",j);
    }
}
