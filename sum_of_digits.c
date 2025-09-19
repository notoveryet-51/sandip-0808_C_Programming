/*Program to calculate the sum of integers in an interger entered
Program date: 18-09-2025
Name- Sandipan Ray
Regn No.: 2025CA085	*/

#include <stdio.h>
int main () {
	int s,a,sum=0;
	printf ("Enter the integer: ");
	scanf ("%d",&s);
	do {
		a=s%10;
		s=s/10;
		sum+=a;
	} while (s!=0);
	printf ("The sum of integers is %d.\n",sum);
	return 0;
}
