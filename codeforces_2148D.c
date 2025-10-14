/*The program is the solution of codeforces problem no. 2148D
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 13-10-2025*/

#include <stdio.h>
int main () {
    int test_case,fields;
    scanf ("%d",&test_case);
    int sum=0,arr2[150],min,temp;
    //test case loop

    for (int i=0; i<test_case; i++) { 
        int p=0,count=0;
        scanf("%d",&fields);
        int arr[fields];
        // field data loop

        for(int j=0; j<fields; j++) { 
            scanf ("%d",&arr[j]);
        }
        // odd no count in field loop

        for (int m=0; m<fields; m++) { 
            if (arr[m]%2!=0) {
                count++;
                arr2[p]=arr[m];
                p++;
            }
               
        }
        
        // taking account of the even numbers

        if (count==0) 
            printf ("0");


        else {
            // odd no ascending sort loop

            for (int k=0; k<count; k++) {
                for (int l=k+1; l<count; l++) { 
                    if (arr2[k]<arr2[l])
                        continue;
                    else {
                        temp= arr2[k];
                        arr2[k]=arr2[l];
                        arr2[l]=temp;
                    }
                }      
            }
            

        }
    }
} 