// Find the sum of first 2 digits of a number
#include <stdio.h>
int main () {
    char str[100];
    printf("Enter the number:: \n");
    fgets (str,100,stdin);
    int a=str [0]-'0';
    int b=str [1]-'0';
    printf ("The sum of the first 2 nos. is %d",a+b);
    return 0;
}