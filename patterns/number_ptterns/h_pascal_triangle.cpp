#include<stdio.h>
int main()
{
	int i,j,n,num=1;
	for(i=0,n=6;i<7;i++,n--)
	{
		//loop for spaces before numbers
		for(j=0;j<n;j++)
		printf(" ");
		for(j=0;j<=i;j++)
		{
			if(j==0||j==i)
			num=1;
			else{
				//	printf("* ");
		num = num*(i-j+1)/j;
		
		
			}
			printf("%\d ", num);
		
		}
		printf("\n");
	}
}