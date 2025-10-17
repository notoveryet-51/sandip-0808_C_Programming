/*The program is the solution of codeforces problem no. 41A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 16-10-2025    */

#include <stdio.h>
#include <string.h>

int main () {
    char str1[110],str2[110],str[110];
    int i=0,count=0,a;
    scanf("%s",str1);
    scanf ("%s",str2);
    while (str1[i]!='\0') {
        count++;
        i++;
    } 
    for (i=0;i<count;i++) {
        str[i]=str1[count-i-1];     
    }
    str[count]='\0';
    a=strcmp(str,str2);
    if (a==0)
        printf ("YES");
    else 
        printf ("NO");
    return 0;
} 