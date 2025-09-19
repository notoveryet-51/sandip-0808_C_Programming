/* Program to accept a sequence of numbers and print the avg, max, min and count of the positive nos. The program stops if a negative value is entered.
Program Date: 18-09-2025
Name: Sandipan Ray
Regn No.: 2025CA085	*/

#include <stdio.h>
#include <math.h>

int main () {
	int count=0,max,min,a;
	float avg,sum;
	printf ("Enter a number: \n");
	scanf ("%d",&a); 
	sum=a; max=a; min=a; 
	while (a>0) {
		printf ("Enter another number: \n");
		scanf ("%d",&a);
		if (a<0)
			break;
		sum+=a;
		if (max<a)
			max=a;
		if (min>a)
			min=a;
		count++;
		}
	avg=sum/(count+1);
	printf ("The total nos. is %d\n",count+1);	
	printf ("The avg is %.2f\n",avg);
	printf ("The max is %d\n",max);
	printf ("The min is %d\n",min);	
	return 0;		
}
