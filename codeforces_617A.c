/*The program is the solution of codeforces problem no. 617A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 11-10-2025*/

#include <stdio.h>
int main () {
    int a,b;
    scanf ("%d",&a);
    if (a%5==0)
        printf ("%d",a/5);
    else
        printf ("%d",1+a/5); 
    return 0;
}