#include<stdio.h>
int add(int n);
int main()
{
	int num;
	printf("Enter a positive number");
	scanf("%d",&num);
	printf("sum=%d",add(num));
	return 0;
	}
	int add (int n)
	{
	if(n!=0)
	return+add(n-1);
	else
	return n;
}
