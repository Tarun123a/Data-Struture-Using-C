#include<stdio.h>
int main()
{
	int n,i,j,arr[20],temp;
	
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
	 
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
		while(j>=0&&arr[j]>temp)
		{
			arr[j+1]=arr[j];
			j--;
		}
	arr[j+1]=temp;
}
	printf("\n Sorted array is: ");
	for(j=0;j<n;j++)
	{
		printf("  %d  ",arr[j]);
	}
	return 0;
}
