// Enter a word or number and check whether it's palindrome or not
#include <stdio.h>
#include <string.h>
int main () {
    int b;
    char str[100];
    printf ("Enter the word: \n");
    fgets (str,100,stdin);
    int n=strlen (str);
    int a=n-2; //string and array starts from zeroth box (so we gave n-1) and strlen calculates an extra space (so n-2)
    for (int i=0;  i<=a/2; i++) {
        if (str[i]==str[a-i])
            break;
        else
           b=1; 
    }
    if (b==1)
        printf ("The word is a palindrome :)");
    else
        printf ("It's not a palindrome :(");
    return 0;

}

