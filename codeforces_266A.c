/*The program is the solution of codeforces problem no. 266A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 13-10-2025*/

#include <stdio.h>
#include <string.h>
int main () {
    int n,count=0;
    scanf ("%d",&n);
    char str[n];
    scanf ("%s",str);
    for (int i=0; i<n; i++) {
        if (str[i]==str[i+1])
            count++;
    }
    printf ("%d",count);
}
