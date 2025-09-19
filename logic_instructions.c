/* Program to do few logical operations
Program Date: 19-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include<stdio.h>

int main()
{
    int i1,i2;
    float f1,f2;
    printf ("Enter two positive integer values :\n");
    scanf ("%d %d",&i1,&i2);
    printf ("Enter two positive float values :\n");
    scanf ("%f %f",&f1,&f2); 
    printf ("The average of floating numbers are : %.2f\n",(f1+f2)/2);
    printf ("The bitwise or on the integers is %d.\n",i1|i2);
    printf ("The bitwise and on the integers is %d.\n",i1&i2);
    printf ("After left shifting i1 by 2 places, the result is : %d\n",i1<<2);   
    printf ("After right shifting i2 by 1 place, the result is : %d\n",i2>>1);
    return 0;
}
