/*The program is the solution of codeforces problem no. 2148D

Name: Sandipan Ray

Regn no.: 2025CA085

Program Date: 13-10-2025*/

#include <stdio.h>

int main () {

    long long test_case,fields;

    scanf ("%lld",&test_case);



//test case loop



    for (int i=0; i<test_case; i++) {

        long long p=0,count=0;

        long long sum=0,arr2[250000],temp1,temp;

        scanf("%lld",&fields);

        long long arr[fields];



        // field data loop



        for(int j=0; j<fields; j++) {

            scanf ("%lld",&arr[j]);

        }



        // odd no count in field loop



        for (int m=0; m<fields; m++) {

            if (arr[m]%2!=0) {

                count++;

                arr2[p]=arr[m];

                p++;

            }

            else {

                sum+=arr[m]; // sum of the evn nos

            }

        }



        // taking account of the even numbers



        temp1=count;



        if (count==0){
           printf ("0\n"); 
           continue;
        }



        // odd no ascending sort loop



        for (int k=0; k<count; k++) {

            for (int l=k+1; l<count; l++) {

                

                    

                if (arr2[k]>arr2[l]) {

                    temp= arr2[l];

                    arr2[l]=arr2[k];

                    arr2[k]=temp;

                }

            }

        }



        //remaining two cases



        if (count%2!=0 ) {

            for (int n= temp1-1; n> (temp1 /2) -1 ; n--)

                sum+=arr2[n];

        }

        else if (count%2==0 && count!=0) {

            for (int p=count-1; p>(count/2)-1; p--)

                sum+=arr2[p];

        }

        printf ("%lld\n",sum);

    }

}

    