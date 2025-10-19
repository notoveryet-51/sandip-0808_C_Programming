/*The program is the solution of codeforces problem no. 1352A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 19-10-2025    */

#include <stdio.h>

int main () {
    int num,a,arr[5],test_case;
    scanf ("%d",&test_case);
    for (int j=0; j<test_case; j++) {
        int i=0,t=1,count=0;
        scanf ("%d",&num); //taking input of the number

// counting the digits and storing them in array from the units place
        while (num>0) {
            a=num%10;
            arr[i]=a*t;
            if (arr[i]!=0)
                count++;
            t*=10;
            i++;
            num/=10;
        }

// printing the size pf array and reverse printing of the array as required
        printf ("%d\n",count);
        for (int k=i-1;k>=0;k--) {
            if (arr[k]==0)
                continue;
            else 
                printf ("%d ",arr[k]);
        }
        printf ("\n");
    }
    return 0;
}