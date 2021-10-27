#include<stdio.h>
int main()
{
	int a[50],n,i;
	printf("\n Enter the value of n:");
	scanf("%d",&n);
	printf("\n Enter %d element of list:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Array before sorting:");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	selection(a,n);
	return 0;
}
void selection (int a[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Array after sorting:");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
}
