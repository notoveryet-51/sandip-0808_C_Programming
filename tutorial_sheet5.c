/* Program to calculate the total cost of a number of goods purchased (tutorial sheet5 qs3)
Program Date: 18-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>

int main () {
    float code_number,cost,total=0,vat;
    int n;
    printf ("Enter the no. of items you purchased: ");
    scanf ("%d",&n);
    for (int i=1; i<=n; i++) {
        printf("Item %d: ", i);
        scanf ("%f %f",&code_number,&cost);
        if (code_number>0 && code_number<=200) {
            total+=cost;
        }
        else if (code_number>200) {
            vat=cost/10;
            total+=cost+vat;
        }
        else if (code_number<0 || cost<0) {
            break;
        }
    }
    printf ("Total cost: %.2f",total);
    return 0;
}