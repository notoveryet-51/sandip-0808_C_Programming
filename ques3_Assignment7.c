/*Program to find out prime numbers through Eratosthenes principle
Name: Sandipan Ray
Regn no.: 2025CA085
Date: 02-11-2025	*/

#include <stdio.h>
int main () {
	int m;
	printf ("Enter the limit: ");
	scanf ("%d",&m);
	int arr[m];
	//setting all values 
	for (int i=0; i<m; i++)	arr[i]=0;
	// eratosthenes  principle
	for (int i=2; i<m; i++) {
		for (int j=2; i*j<m; j++) {
			arr[i*j]=1;
		}
	}
	for (int i=2; i<m; i++) {
		if (arr[i]==0)
			printf ("%d ",i);
	}
}
