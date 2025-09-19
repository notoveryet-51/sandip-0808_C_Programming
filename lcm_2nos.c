/*Program to return the lcm of two nos using functions
Program Date: 19-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085    */

#include<stdio.h>
int lcm(int,int);
int main()
{
    int x,y;
    printf ("Enter the 2 integers in descending order:\n");
    scanf("%d %d",&x,&y);
    printf ("the lcm of the numbers is : %d",lcm(x,y));
    return 0;
}
int lcm (int x,int y) {
    int i,lcm;
    
    for (i=1;i<=y;i++) {
        lcm=x;
        lcm*=i;
        if (lcm%y==0)
            break;
    }
    return (lcm);
}