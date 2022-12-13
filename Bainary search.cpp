#include<stdio.h>
int main()
{
	int n,i,a,l,r,mid,arr[n];
	printf("Enter the number of elemmnts:\n");
	scanf("%d",&n);
	printf("Enter the sorted array element: \n ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the value to find:\n");
	scanf("%d",&a);
	l=0;
	r=n-1;
	mid=(l+r)/2;
	
		while(l<=r)
{
	if(arr[mid]<a)
	
	l=mid+1;
	
	else if(arr[mid]==a)
	{
	printf("%d found at the location %d",a,mid+1);
	break;	
	}
	else 
	
	r=mid-1;
	mid=(l+r)/2;

}

if(l>r)

printf("%d is not present in the array. ", a);

return 0;	
}

