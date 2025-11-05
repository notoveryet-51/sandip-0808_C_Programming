/* Program to print totient numbers of a given number
Regn No: 2025CA085
Name: Sandipan Ray
Date: 02-11-2025	*/

#include <stdio.h>
int coprime(int m,int n) {
	int count=0;
	for (int i=2; i<=m && i<=n; i++) {
		if (!(m%i==0 && n%i==0))	count++;
		else {
			count=0;
			break;
		}
	}
	if (count!=0)	 return 1;
	else 	return 0;
}
int totient(int n) {
	for (int i=2; i<n; i++) {
		if (coprime (i,n))	printf ("%d ",i);
	}
}
int main () {
	int a;
	printf ("Enter a number: ");
	scanf ("%d",&a);
	printf ("1 ");
	totient(a);
	printf ("\n");
	return 0;
}
