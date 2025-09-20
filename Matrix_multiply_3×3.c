/*Program to print the multiplication of two 3*3 matrices
Program Date: 19-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include<stdio.h>

int main()
{
    int i,j,k,arr1[3][3],arr2[3][3];
    int arr3[3][3] = {0};
    printf("Enter contents for matrix A\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf ("Enter for %d,%d position: ",i,j);
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("Enter contents for matrix B\n");
    for (i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            printf ("Enter for %d,%d position: ",i,j);
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            for (k=0; k<3; k++) {
                arr3[i][j]+=arr1[i][k]*arr2[k][j];
            }
        }
    }
    printf  ("The matrix is : \n");
    for  (i=0; i<3; i++)  {
        for (j=0; j<3; j++) {
            printf ("%d  ",arr3[i][j]);
        }
        printf  ("\n");
    }
    return 0;
}
    
