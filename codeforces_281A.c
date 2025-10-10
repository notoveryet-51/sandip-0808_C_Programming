/*The program is the solution of codeforces problem no. 281A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 10-10-2025*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[1000];
    scanf("%[^\n]s",str);
    int a= str[0];
    if (a>96 && a<123) 
        a-=32;
    str[0]=a;
    puts(str);
    return 0;
}