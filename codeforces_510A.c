/*The program is the solution of codeforces problem no. 510A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 19-10-2025    */

#include <stdio.h>

int main () {
    int n,m,k=1,p=3;
    scanf ("%d %d",&n ,&m);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (i%2==0) 
                printf ("#");
            else if (i==k) {
                for (int l=0;l<m-1;l++) {
                    printf (".");
                }
                printf ("#");
                k+=4;
            }
            else if (i==p) {
                printf ("#");
                for (int l=0;l<m-1;l++) {
                    printf (".");
                }
                p+=4;
            }
        }
        printf ("\n");
    }
    return 0;
}
