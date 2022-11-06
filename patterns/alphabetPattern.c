#include<stdio.h>
int main()

{
	int i,j,k,n,nSpaces=1,l;
	
	// ascii A=65,G=71
	for(i=0,n=71;i<7;i++,n--)
	{
		// loop to print first-half characters
		for(j=65;j<=n;j++)
		printf(" %c",j);
		
		// loop to print spaces except first line
		if(n!=71)
		{
			
			for(k=0;k<nSpaces;k++)
			// double spaces as there is a space b/w chars
			printf("  ");
			nSpaces+=2;//as nSpaces increase by 2 every line
		}
		// loop for other-half of chars
		 
         	if(n==71)          // if First line
            l=n-1;             // Do not Repeat last Alphabet
			else               
			l=n;          	   
        	for(;l>=65;l--)
            	printf(" %c",l);
    	printf("\n");	
	}
	
}