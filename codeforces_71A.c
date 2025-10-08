/*The program is the solution of codeforces problem no. 71A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 07-10-2025*/

#include<stdio.h>
#include <string.h>
int main() {
    int n;
    char str[200];
    scanf("%d",&n);
    getchar();
    for (int i=1;i<=n;i++) {
        fgets (str,200,stdin);
        int a= strlen (str);
        if (a>11) {
            printf ("%c%d%c\n",str[0],a-3,str[a-2]);
        }
        else
            printf ("%s",str);
            
    }
    return 0;
}