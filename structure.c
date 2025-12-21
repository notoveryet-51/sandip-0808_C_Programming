#include <stdio.h>
#include <string.h>

int main () {
    char str1[100],str2[100];
    printf ("Enter the first string:");
    scanf ("%s",str1);
    printf ("Enter the second string:");
    scanf ("%s",str2);    
    int minimum,flag=0;
    if (strlen(str1)>=strlen(str2))
        minimum=strlen(str2);
    else minimum=strlen(str1);
    for (int i=0; i<minimum; i++) {
        if (str1[i]!=str2[i]) {
            flag=1;
            if (str1[i]>str2[i]) {
                puts(str2);
                puts(str1);
                return 0;
            }
            else {
                puts(str1);
                puts(str2);
                return 0;
            }
        }
    }
    if (flag==0) {
        if (strlen(str1)>strlen(str2)) {
            puts(str2);
            puts(str1);
        }
        else {
            puts(str1);
            puts(str2);
        }
    }
    return 0;
}