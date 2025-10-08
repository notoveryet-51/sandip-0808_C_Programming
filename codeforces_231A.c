/*The program is the solution of codeforces problem no. 231A
Name: Sandipan Ray
Regn no.: 2025CA085
Program Date: 08-10-2025*/

#include<stdio.h>
int main() {
      int n,petya,vasya,tonya,count=0;
      scanf("%d",&n);
      for (int i=1;i<=n;i++) {
            scanf("%d %d %d",&petya,&vasya,&tonya);
            if (petya==1 && vasya==1 || vasya==1 && tonya==1 || petya==1 && tonya==1)
                  count++;
            else if (petya==1 && vasya==1 && tonya==1)
                  count++;
      }
      printf("%d",count);
}