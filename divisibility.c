/* Program to check the divisibility by 7 of nos between 9 and 300(both inclusive) and add the sum of such nos
Program date: 18-09-2025
Name: Sandipan Ray
Regn. No.: 2025CA085 	*/

#include <stdio.h>
int main ()  {
	int i,sum=0;
	for (i=9; i<=300; i++) {
		if (i%7==0 && i%63!=0)
			sum+=i;
	}
	printf ("The sum is %d.\n",sum);
}
