/* Program to add series 1^4+2^4+4^4+7^4+... till an user input value of n less than 10
Program Date: 18-09-2025
Name: Sandipan Ray
Regn no.: 2025CA085	*/

#include <stdio.h>
#include <math.h>
int main () {
	int a,b,c=0,sum=0,d=1;
	printf ("Enter a number less than 10.\n");
	scanf ("%d",&a);
	if (a<10 && a>0) {
		for (int n=1;n<=a;n++) {
			b=pow(d,4);
			sum+=b;
			c++;
			d+=c;
		}
		printf ("the required sum is %d.\n",sum);
	}
	
	else
		printf("Wrong Input.\n");	
	
	return 0;
}

