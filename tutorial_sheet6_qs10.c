/* Program to read integers and print them in patterns (tutorial sheet6 qs10)
Program Date: 19-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>

int main () {
    int N;
    printf ("Enter the size of array: ");
    scanf ("%d",&N);
    int arr[N];
    printf ("Enter the values of array:\n");
    for (int i=0; i<N; i++) {
        scanf ("%d",&arr[i]);
    }
    //pattern printing
    for (int i=0; i<N; i=i+4) {
        for (int j=i; (j<i+4) && (j<N) ; j++) {
            printf ("%d ",arr[j]);
        }
        printf ("\n");
    }
    return 0;
}