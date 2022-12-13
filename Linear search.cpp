#include<stdio.h>
int main()
{
	int n,i,a,arr[10];
	
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	printf("Enter the array element:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the searching element:\n");
	scanf("%d",&a);
	for(i=0;i<n;i++)
	{
		if(arr[i]==a)
		{
			printf("Element is present. location = %d",i);
			break;	
		}
			
	}
	if (i==n)
	{
		printf("Element is not present.");
	}
	

	return 0;
}
