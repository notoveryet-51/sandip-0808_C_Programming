/*The program is the solution of codeforces problem no. 734A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-10-2025*/

#include <stdio.h>
#include <string.h>

int main () {
    int n,i=0,temp1=0,temp2=0,count=0;
    char str[100000];
    scanf ("%d",&n);
    scanf ("%s",str);
    for (int j=0; j<n; j++) {
        if (str[j]=='A')
            temp1++;
        else if (str[j]=='D')
            temp2++;
    }
    if (temp1>temp2)
        printf ("Anton");
    else if (temp2>temp1)
        printf ("Danik");
    else 
        printf ("Friendship");
}