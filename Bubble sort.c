#include<stdio.h>
#include<conio.h>
#include<stdio.h>
int main()
{
	int a[50],n,i,j,temp;
	printf("Enter the number of data item:");
		scanf("%d",&n);
		printf("Enter the element:");
		for(i=0;i<=n;++i)
		scanf("%d",&a[i]);
		for(i=1;i<n;++i)
		for(j=0;j<(n-i);++i)
		if(a[j]>a[j+1])
		{
		  temp=a[j];
		  a[j]=a[j+1];
		  a[j+1]=temp;	
		}
		printf("\n Data after sorting:");
		for(i=0;i<n;++i)
		printf("%d",a[i]);
		return 0;
}
