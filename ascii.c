// Print the ASCII number and associated character side by side
#include <stdio.h>
int main () {
    int a;
    for (a=0; a<=127; a++) {
        printf ("%d ---- ", a);
        printf("%c \n", a);
    }    
    return 0;

}