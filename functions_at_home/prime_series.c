#include<stdio.h>
int primeCheck(int);
int main(){
	int i,prime;
	printf("Prime Series from 1 to 100 : \n");
	for(i=2;i<100;i++)
	{
		prime=primeCheck(i);
		if(prime)
		printf("%d, ",prime);
	}
}
int primeCheck(int n)
{
	int i;
	for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			return 0;
				
		}
		return n;
//		if(i==n/2+1)
//		return n;
//		else
//		return 0;
}