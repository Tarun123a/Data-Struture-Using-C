#include<stdio.h>
int main()
{
	int n,i,j,arr[20],temp,flag;
	
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
	flag=0;
		for(j=0;j=n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1;
			}
		}
		if(flag==0)
		break;
	}
	
	printf("Sorted array is: ");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
