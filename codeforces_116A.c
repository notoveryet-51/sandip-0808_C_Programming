/*The program is the solution of codeforces problem no. 116A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 18-10-2025    */

#include <stdio.h>

int main () {
    int tram_stops,entry,exit,difference,capacity=0,max=0;
    scanf("%d",&tram_stops);
    for (int i=1; i<=tram_stops; i++) {
        scanf ("%d %d",&exit,&entry);
        difference=entry-exit;
        capacity+=difference;
        if (capacity>max)
            max=capacity;
    }
    printf ("%d",max);
    return 0;
}