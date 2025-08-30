//Here we are swapping the last digits of the entered number sequence through string
#include<stdio.h>
#include <string.h>
int main()   {
    int n,a;
    char str[100];
    printf("Enter the number whose last digits are to be swapped:\n ");
    fgets (str,100,stdin);
    n= strlen(str);
    a=str[0]; str[0]=str[n-2]; // str[n-1] is the blank space and str[n] is the new line "\n" and hence we use n-2 for the desired last nos
    str[n-2]=a;
    printf ("Here's the number whose first and last digits are swapped:\n");
    puts(str);
    return 0;
}

// fine but try if there's any way to decrease the lines