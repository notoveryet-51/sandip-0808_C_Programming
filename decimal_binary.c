/* Program to accept a number between 0 & 32 and print its binary
Program Date:11-09-2025
Regn No.: 2025CA085
Name: Sandipan Ray */

#include<stdio.h>
int main () {
    int decimal,i=0,arr[5];
    printf ("Enter a number between 0 and 32 while both are exclusive: ");
    scanf("%d", &decimal);
    if (decimal==0 || decimal>=32)
        printf ("ERROR : The input is outside given range :( \n");
// Binary conversion program
    else {
        do {
            arr[i]=decimal%2; //taking input one by one in array
            i++;
            decimal=decimal/2;
        } while (i !=5);
//printing the array in reverse
        for (i=4; i>=0; i--) {
            printf ("%d", arr[i]);
        }
    }
    printf("\n");
    return 0;
}