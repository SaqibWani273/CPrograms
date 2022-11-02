#include<stdio.h>
int main()
{
	int i,j,temp,smallest,a[7],index;
	printf("Enter 7 elements for array\n");
	for(i=0;i<7;i++)
	scanf("%d",&a[i]);
	printf("Array Entered = ");
	for(i=0;i<7;i++)
	printf("%d ",a[i]);
	printf("\nSorted Array = ");
	
	// sorting begins from here ...
	for(i=0;i<6;i++)
    {
    	smallest=a[i];
    	index=i;
    	for(j=i+1;j<7;j++)
    	{
    		if(smallest>a[j]){
    			smallest=a[j];
    		index=j;
			}
    		
		}
	
			temp=a[i];
		a[i]=smallest;
		a[index]=temp;
		
			
		
		
	}
	for(i=0;i<7;i++)
	printf("%d ",a[i]);
}