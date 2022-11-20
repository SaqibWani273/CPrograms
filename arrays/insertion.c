#include<stdio.h>
int main()
{
		int i,j,temp,arr[7],n;
			printf("Enter 7 elements for array\n");
	for(i=0;i<7;i++)
	scanf("%d",&arr[i]);
	printf("Array Entered = ");
	for(i=0;i<7;i++)
	printf("%d ",arr[i]);
	printf("\nSorted Array = ");
	
	// sorting begins from here ...
	for(i=1;i<7;i++)
	{
		for(j=i;j>0;j--)
		{
				if(arr[j]<arr[j-1])
		{
			//swap 
			temp=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=temp;
			
		}
		}
	
	}
		for(i=0;i<7;i++)
	printf("%d ",arr[i]);
}