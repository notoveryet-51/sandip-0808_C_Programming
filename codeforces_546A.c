/*The program is the solution of codeforces problem no. 546A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 11-10-2025*/

#include <stdio.h>

int main () {
    int rate,owned,quant,total=0;
    scanf("%d %d %d",&rate,&owned,&quant);
    for (int i=1;i<=quant;i++) {
        total+=rate*i;
    }
    if (owned>total)
        printf("0");
    else 
        printf ("%d",total-owned);
}