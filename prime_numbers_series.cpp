#include<stdio.h>
int main(){
	int i,j;
	printf("Prime Numbers from 1 to 100 are ...\n");
	for(i=1;i<=100;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			break;	
				
		}
		if(j==i/2+1)
		printf("%d ",i);
	}
}