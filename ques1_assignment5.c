/* Program to enter integers 0-9
Name: Sandipan ray
Program date: 9-10-2025
Regn no.: 2025ca085	*/

#include<stdio.h>
int main() {
	
	int arr[10],i;
	for (i=0; i<10; i++) {
		arr[i]=0;
	}
	int n;
	do  {
	
		printf ("Enter a number between 0 and 9(both inclusive): ");
		scanf ("%d",&n);
		switch (n) {
			case 0: arr[0]++;
				break;
			case 1: arr[1]++;
				break;
			case 2: arr[2]++;
				break;
			case 3: arr[3]++;
				break;
			case 4: arr[4]++;
				break;
			case 5: arr[5]++;
				break;
			case 6: arr[6]++;
				break;
			case 7: arr[7]++;
				break;
			case 8: arr[8]++;
				break;
			case 9: arr[9]++;
				break;
		} 
	}while (n>=0 && n<=9);
	for (i=0; i<10; i++) {
		printf("No. of %d's: %d\n",i,arr[i]);
	}
	printf ("\n");
}
