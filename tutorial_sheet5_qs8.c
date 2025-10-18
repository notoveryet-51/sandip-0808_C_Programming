/* Program to print bank statements as directed (tutorial sheet5 qs3)
Program Date: 18-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include <stdio.h>

int main () {
    float dep=0,wtdw=0,prev,chng;
    int count_dep=0,count_wtdw=0;
    printf ("Enter your previous balance: ");
    scanf ("%f",&prev);
    printf ("Enter your transactions one by one!\n");
    printf ("Enter 0 if you want to stop.\n");
    do {
        scanf("%f",&chng);
        if (chng<0){
            prev+=chng;
            if (prev<0) {
                printf ("INSUFFICIENT BALANCE!!!\n");
                prev-=chng;
            }
            else {
                printf ("WITHDRAWAL.  New Balance: %.2f\n",prev);
                count_wtdw++;
                wtdw+=(-1)*chng;
            }
        }
        else if (chng>0) {
            prev+=chng;
            printf ("DEPOSIT.  New Balance: %.2f\n",prev);
            count_dep++;
            dep+=chng;
        }
    } while (chng!=0);
    printf("Total no. of Deposits: %d\n",count_dep);
    printf ("Total no. of Withdrawals: %d\n",count_wtdw);
    printf("Total deposits: %.2f\n",dep);
    printf ("Total withdrawal: %.2f\n",wtdw);
    printf ("Total amount: %.2f\n", prev);
    return 0;
}