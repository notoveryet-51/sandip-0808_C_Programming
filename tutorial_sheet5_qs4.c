/* Program to print the no. of terms of series 1+4+9+16+... to be added together for the sum to exceed 1000 (tutorial sheet5 qs3)
Program Date: 18-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>

int main () {
    int count=0,sum=0,i=1,sq;
    while (sum<=1000) {
        sq=i*i;
        sum+=sq;
        i++;
        count++;
    }
    printf ("%d",count);
    return 0;
}