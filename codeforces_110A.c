/*  The program is the solution of codeforces problem no. 110A
    Name: Sandipan Ray
    Regn no.: 2025CA085
    Program Date: 14-10-2025    */

#include <stdio.h>

int main () {
    int n,a,count=0,temp1,temp2=0;
    scanf("%d",&n);

//  count the number of lucky digits 

    while (n!=0){
        a=n%10;
        if (a==4 || a==7) {
            count++;
        }
        n/=10;
    }    
    a=0;

// for number without any lucky digit
    
    if (count==0) {
        printf ("NO");
        return 0;
    }

//  checking if the digits in the total number of lucky digits is lucky   

    while (count!=0) {
        a=count%10;
        if (a==4 || a==7) 
            temp2++;
        else {
            temp2=0;
            break;
        }
        count/=10;
    }
    if (temp2!=0) 
        printf ("YES");
    else
        printf ("NO");
}