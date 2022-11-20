#include<stdio.h>
int main(){
	int i,j,temp,digits,armstrongSum,singleDigit,digitPower;
	printf("ArmStrong Numbers upto 1000 are ...\n");
	for(i=1;i<1000;i++)
	{
		
		armstrongSum=0;
		digits=0;
		// get the no.of digits of i
		temp=i;
		while(temp)
		{
			temp/=10;
			digits++;
		}
	
	
		// loop to calculate armstrong sum

	for(temp=i;temp!=0;temp/=10)
		{
			digitPower=1;   // initially set to 1
			singleDigit=temp%10; // separates one digit from the number
			for(j=0;j<digits;j++)
			digitPower*=singleDigit; 	
			
			armstrongSum+=digitPower;
		
		}
	
		if(armstrongSum==i)
		printf("%d,",i);
		
	}// outer loop where i->1 to 1000
}