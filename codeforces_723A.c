/*The program is the solution of codeforces problem no. 723A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 15-10-2025*/

#include <stdio.h>

int main () {
    int arr[3],temp;
    for (int i=0; i<3; i++) {
        scanf ("%d",&arr[i]);
    }
    for (int i=0; i<3; i++) {
        for (int j=i+1; j<3; j++) {
            if (arr[i]>arr[j]) {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf ("%d", arr[1]-arr[0]+arr[2]-arr[1]);
    return 0;
}