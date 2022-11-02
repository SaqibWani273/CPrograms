#include<stdio.h>
int main(){
	int i,j,k=1;
	for(i=1,j=1;i<=10;j++,i+=j)
	{
		for(;k<=i;k++){
			printf(" %d",k);
		}
		
		k=i+1;
		printf("\n");
	}
}