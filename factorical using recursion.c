#include<stdio.h>
long int multiplyNUmbers(int n);
int main()
{
	int n;
	printf("Enter a positive integer:");
	scanf("%d",&n);
	printf("Factorical of %d = %ld",n,multiplyNumbers(n));
	return 0;
}
long int multiplyNumber(int n)
{
	if(n>=1)
	return n*multiplyNumbers(n-1);
	else
	return 1;
}
