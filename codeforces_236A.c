/*The program is the solution of codeforces problem no. 236A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 09-10-2025*/

#include <stdio.h>
#include <string.h>
int main () {
    char str[100];
    scanf("%[^\n]s",str);
    int i=0,count=0,d,j;
    while (str[i]!='\0') {
        count++;
        i++;
    }
    d=count;
    for (i=0;i<count;i++) {
        for (j=i+1;j<count;j++) {
            if (str[i]!=str[j])
                continue;
            else{
                d--;
                break;
            }
        }
    }
    if (d%2==0)
        printf("CHAT WITH HER!");
    else
        printf ("IGNORE HIM!");
}