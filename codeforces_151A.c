/*The program is the solution of codeforces problem no. 151A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-10-2025*/

#include <stdio.h>

int min(int x,int y, int z) {
    int min;
    if (x<=y && x<=z)
        min=x;
    else if (y<=x && y<=z)
        min=y;
    else if (z<=x && z<=y)
        min=z;
    return min;
}

int main () {
    int n,k,l,c,d,p,nl,np;
    int totl_slc,totl_slt,totl_drk,no_tst,no_slt;
    int result;
    scanf ("%d %d %d %d %d %d %d %d",&n,&k,&l,&c,&d,&p,&nl,&np);
    totl_drk=k*l;
    no_tst=totl_drk/nl;
    totl_slc=c*d;
    totl_slt=p;
    no_slt=p/np;
    result=min(no_tst,totl_slc,no_slt);
    printf("%d",result/n);
    return 0;
}