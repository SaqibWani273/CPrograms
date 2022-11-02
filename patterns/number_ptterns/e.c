#include<stdio.h>
int main(){
	int i,j,k;
	for(i=5;i>=1;i--){
		k=1;	
		for(j=1;j<=5;j++){
			
			if(j<i)
			printf(" ");
			else{
				printf("%d",k++);
			}
			
		}
		printf("\n");
}
}