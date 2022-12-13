#include<stdio.h>
int main()
{
	int n,i,j,arr[n],temp;
	
	printf("Enter the number of element: \n");
	scanf("%d",&n);
	
	printf("Enter array element: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	 printf(" The inputed array is :");
	 for(i=0;i<n;i++)
	 {
	 	printf("  %d  ",arr[i]);
	 }
	 
	for(i=0;i<n-1;i++)
	{
		int min=i;
		for(j=i+1;j<n;j++)
		{
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		if(min!=i)
		{
			temp=arr[i];
			arr[i]=arr[min];
			arr[min]=temp;
		}
		}
	
	
	printf("\n Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("  %d  ",arr[i]);
	}
	return 0;
}
