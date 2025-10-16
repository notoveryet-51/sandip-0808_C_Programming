/* Program to make a funtion and calculate the sum of square of its digits
Program Date: 16-10-2025
Name: Sandipan Ray
Regn. No.: 2025CA085	*/

#include <stdio.h>

int sqn(int n)
{
	int ext, sum = 0;
	for (int i = 1; i <= 5; i++)
	{
		while (n != 0)
		{
			ext = n % 10;
			sum += ext * ext;
			n /= 10;
		}
		printf("Iteration no.%d : %d\n", i, sum);
		n = sum;
		sum = 0;
	}
	return 0;
}
int main()
{
	int n = 17;
	printf("We check for 17:\n");
	sqn(n);
	return 0;
}
