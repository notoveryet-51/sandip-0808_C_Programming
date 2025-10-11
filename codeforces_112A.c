/*The program is the solution of codeforces problem no. 112A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 11-10-2025*/

#include <stdio.h>
#include <string.h>

int main () {
    int a;
    char str1[100];
    char str2[100];
    scanf("%s",str1);
    scanf("%s",str2);
    a=strcmp (strlwr(str1),strlwr(str2));
    if (a==0)
        printf ("0");
    else if (a<0)
        printf ("-1");
    else if (a>0)
        printf ("1");
}