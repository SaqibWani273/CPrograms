#include<stdio.h>
int main(){
	int i,j,r=1;
	for(i=0;i<6;i++){
		
		for(j=0;j<i;j++){
		r*=11;
			printf("%d\t",r);
	}
	printf("%d\n",r);
	}
	//printf("%d\n",11*i);
	
}