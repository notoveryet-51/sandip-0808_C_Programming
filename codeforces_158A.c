/*The program is the solution of codeforces problem no. 158A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 08-10-2025*/

#include <stdio.h>
int main() {
    int n,k,count=0;
    scanf ("%d %d",&n,&k);
    int arr[n];
    for (int i=0;i<n;i++) {
        scanf ("%d",&arr[i]);
    }
    for (int i=0;i<n;) {
        if (arr[i]==0)
           i++; 
        else if (arr[i]>=arr[k-1])
            count++;
            i++;
    }
    printf ("%d",count);
}