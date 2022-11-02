#include<stdio.h>
int main(){
	int i,j,smallest,a[7],temp;
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
    	smallest=i;
    	for(j=i+1;j<7;j++)
    	{
    		if(a[smallest]>a[j])
    		smallest=j;
		}
		if(smallest!=i)
		{
			temp=a[i];
		a[i]=a[smallest];
		a[smallest]=temp;
		}
		
	}
	for(i=0;i<7;i++)
	printf("%d ",a[i]);
}