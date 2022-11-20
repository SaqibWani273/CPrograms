#include<stdio.h>

	int main(){
		int i,j,temp,a[7],n;
			printf("Enter 7 elements for array\n");
	for(i=0;i<7;i++)
	scanf("%d",&a[i]);
	printf("Array Entered = ");
	for(i=0;i<7;i++)
	printf("%d ",a[i]);
	printf("\nSorted Array = ");
	
	// sorting begins from here ...
	
	for(i=0,n=6;i<6;i++,n--)// outer loop runs  only six times
	{
		for(j=0;j<n;j++)// n=> no.of elements to be sorted 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
		for(i=0;i<7;i++)
	printf("%d ",a[i]);
}
