/*The program is the solution of codeforces problem no. 59A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 13-10-2025*/

#include <stdio.h>
#include <string.h>
int main () {
    int i=0,j=0,capl=0,lwr=0;
    char str[100];
    scanf ("%s",str);
    while (str[i]!='\0') {
        if (str[i]>=65 && str[i]<91)
            capl++;
        else if (str[i]>=97 && str[i]<123)
            lwr++;
        i++;
    }
    i=0;
    if (capl>lwr)
        while (str[i]!='\0') {
            str[i]=toupper(str[i]);
            i++;
        }
    else 
        while (str[j]!='\0') {
            str[j]=tolower(str[j]);
            j++;
        }
    puts(str);
}