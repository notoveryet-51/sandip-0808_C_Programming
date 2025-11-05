/* Program to return a boolean variable on verifying a perfect number. Also find the next perfect number and the previous numbers till the entered number is reached
Name: Sandipan Ray
Regn no.: 2025CA085
Date: 30-10-2025	*/

#include <stdio.h>
#include <stdbool.h>

//return a boolean variable
bool perfect_number(int a) {
	int sum=0;
	for (int i=1; i<a; i++) {
		if (a%i==0)	sum+=i;
	}
	if (sum==a)	return true;
	else return false;
}

//return the perfect number just after the entered one
int greater(int a) {
	while (1) {
		int sum=0;
		a++;
		for (int i=1; i<a; i++) {
			if (a%i==0)	sum+=i;
		}
		if (sum==a)	return a;
	}	
}

//return the list of perfect numbers till the number entered
void first_m (int a) {
	for (int i=1; i<=a; i++) {
		int sum=0;
		for (int j=1; j<i; j++) {
			if (i%j==0)	sum+=j;
		}
		if (sum==i)	printf ("%d ",i);
	}
	return;
}

//main function
int main() {
	int n;
	printf ("Enter a number: \n");
	scanf ("%d",&n);
	int result=perfect_number(n);	//function1 call
	printf ("Result: %d\n",result);
	printf ("Next smallest perfect number: %d\n",greater(n));	//function2 call
	printf ("List of perfect numbers till %d :\n",n);
	first_m(n);	//function3 call
	printf ("\n");
	return 0;
}
