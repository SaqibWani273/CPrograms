#include<stdio.h>
int main()
{
	int i,j,k=1,n;
	// outer loop
	for(i=1,n=3;i<=4;i++,n--)
	{
		
		//loop for spaces before numbers
		for(j=0;j<n;j++)
		printf(" ");
		
		// loop for numbers
		for(j=0;j<i;j++)
		printf("%d ",k++);
		
		//loop for spaces after numbers
		printf("\n");
	}
}