/* Program to print the transpose  of the user entered matrix
Program Date:  14-09-2025
Name: Sandipan Ray     */

#include <stdio.h>

int main() {
    int a,i,j;
    int arr[3][3];
    for  (i=0; i<3; i++)  {
        for (j=0; j<3; j++) {
            printf  ("Enter  the  number for  the position %d,%d of the  matrix : ",i+1,j+1);
            scanf  ("%d",& arr[i][j]);
        }
    }
    printf  ("The matrix is : \n");
    for  (i=0; i<3; i++)  {
        for (j=0; j<3; j++) {
            printf ("%d  ",arr[i][j]);
        }
        printf  ("\n");
    }
    printf  ("The transpose of the matrix is : \n");
    for  (i=0; i<3; i++)  {
        for (j=0; j<3; j++) {
            printf ("%d  ",arr[j][i]);
        }
        printf  ("\n");
    }
    return 0;
}