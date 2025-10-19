/*The program is the solution of codeforces problem no. 1030A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 18-10-2025    */

#include <stdio.h>

int main () {
    int n,opinion;
    scanf ("%d",&n);
    for (int i=0; i<n; i++) {
        scanf ("%d",&opinion);
        if (opinion==1) {
            printf ("HARD");
            goto next;
        }
    }
    printf ("EASY");
    next:
    return 0;
}