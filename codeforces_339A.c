/*The program is the solution of codeforces problem no. 339A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 10-10-2025*/

#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf ("%[^\n]s",str);
    int i=0,j,k=0,count=0,min;
    while (str[i]!='\0') {
        count++;
        i++;
    }
    for (i=0;i<count;i=i+2) {
        for (j=i+2;j<count;j=j+2) {
            if (str[i]>str[j]) {
                char temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }     
        } 
    }
    puts(str);
    return 0;
}