/*The program is the solution of codeforces problem no. 1433A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 22-10-2025    */

#include <stdio.h>

int main () {
    int t,given;
    scanf ("%d", &t);
    for (int cont=1; cont<=t; cont ++) {
        scanf ("%d",&given);
        int pro=0,sum=0;
        for (int i=1;i<=9;i++) {
            int num=0;
            pro=i;
            for (int j=1; j<=4; j++) {
                num+=pro;
                pro*=10;
                sum+=j;
                if (num==given) {
                    goto next;
                }       
            }  
        }
        next:
        printf ("%d\n",sum);
    }
    return 0;
}