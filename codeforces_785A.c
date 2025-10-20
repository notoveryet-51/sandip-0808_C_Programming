/*The program is the solution of codeforces problem no. 785A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 20-10-2025    */

#include <stdio.h>
#include <string.h>

int main () {
    long n,sum=0;
    char str[100];
    scanf ("%d",&n);
    for (int i=1; i<=n; i++) {
        scanf ("%s",str);
        if (strcmp(str,"Tetrahedron")==0)
            sum+=4;
        else if (strcmp(str,"Cube")==0)
            sum+=6;
        else if (strcmp(str,"Octahedron")==0)
            sum+=8;
        else if (strcmp(str,"Dodecahedron")==0)
            sum+=12;
        else if(strcmp(str,"Icosahedron")==0)
            sum+=20;
    }
    printf ("%d",sum);
    return 0;
}