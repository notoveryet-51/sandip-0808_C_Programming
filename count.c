// Take input and count the number of digits
#include<stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int n;
    printf ("Enter the number: \n");
    fgets(str,100,stdin);
    n=strlen(str);
    printf("The number of digits entered is: %d\n",n-1);
    return 0;
}