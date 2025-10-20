/* Program to read 2 strings and determine if first one is prefix of the second or not (tutorial sheet6 qs10)
Program Date: 20-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>
#include <string.h>

int main () {
    char s1[100],s2[100];
    printf ("Enter the first string: ");
    scanf ("%s",s1);
    printf ("Enter the second string: ");
    scanf ("%s",s2);
    int len1=strlen(s1);
    char str[100];
    for (int i=0; i<len1; i++) {
        str[i]=s2[i];
    }
    str[len1]='\0';
    if (strcmp(str,s1)==0)
        printf ("s1 is prefix of s2\n");
    else printf ("s1 is not a prefix of s2\n");
    return 0;
}