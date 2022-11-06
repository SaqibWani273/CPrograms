#include<stdio.h>
int main(){
	int i,j;
	for(i=1;i<6;i++)
	{
		for(j=5;j>0;j--)
		if(j>i)
		printf("  ");
		else
		printf("* ");
		
		printf("\n");
	}
}