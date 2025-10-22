/*The program is the solution of codeforces problem no. 1097A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 22-10-2025    */

#include <stdio.h>
#include <string.h>

int main () {
    char str[3]; //card in hand
    scanf("%s",str);
    getchar();
    int count=0;
    char card[15]; //5card string compacted in 1
    scanf("%[^\n]",card);
    for (int i=0; i<14; i=i+3) {
        if (str[0]==card[i])
            count=1;
    }
    for (int i=1; i<14; i=i+3) {
        if (str[1]==card[i])
            count=1;
    }
    if (count==1)
        printf ("YES");
    else printf ("NO");
    return 0;
}