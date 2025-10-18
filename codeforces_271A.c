/*The program is the solution of codeforces problem no. 271A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 18-10-2025    */

#include <stdio.h>

int main () {
    int yr,arr[4],a,i=0;
    scanf ("%d",&yr);
    for (int j=yr+1;j<=9000;) {
        yr=j;
        while (yr!=0) {
            a=yr%10;
            arr[i]=a;
            i++;
            yr/=10;
        }
        i=0;
        for (int k=0; k<4; k++) {
            for (int l=k+1; l<4; l++) {
                if (arr[k]==arr[l])
                    goto next;
            }
        }   
        printf ("%d",j);
        break;
        next:
        j++;
    }
    return 0;
}