/*Program to print the multiplication of two 3*3 matrices
Program Date: 19-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include<stdio.h>

int main()
{
    int i,j,arr1[3][3],arr2[3][3],arr3[3][3];
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
    int a,b,c,sum1=0,sum2=0,sum3=0;
    for(i=0; i<3; i++) {
        for (j=0; j<3; j++) {
            a=arr1[i][j]*arr2[j][0];
            sum1+=a;
            b=arr1[i][j]*arr2[j][1];
            sum2+=b;
            c=arr1[i][j]*arr2[j][2];
            sum3+=c;
        }
        arr3[i][0]=sum1;
        arr3[i][1]=sum2;
        arr3[i][2]=sum3;
        sum1=0;
        sum2=0;
        sum3=0;
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
