#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	long int facto;
	long int factorical(int n);
	printf("Enter value of n:");
	scanf("%d",&n);
	facto=factorical(n);
	printf("%d!=%ld",n,facto);
	getch();
}
long int factorical(int n)
{
	if(n==0)
    	return 1;
	else
		return n*factorical(n-1);
}
