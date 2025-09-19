/* Print the fraction part in binary
Name: Sandipan Ray
Regn no.: 2025CA085
Date 12-09-2025     */

#include<stdio.h>
#include<math.h>
int main () {
    double a, frac1, frac2, int1, int2;
    printf("Enter a decimal fraction (0.x1x2x3x4.....):\n");
    scanf("%lf", &a);
    frac1=modf(a,&int1);
    if (a<0 || a==(int)a)
        printf("ERROR: You have not entered the number as specified");
    else {
        printf("The binary is %d.", (int)int1);
        for(int i=0; i<4; i++) {

            frac1=frac1*2;
            frac1=modf(frac1, &int2);
            printf("%d", (int)int2);
        }
    }
    return 0;
}