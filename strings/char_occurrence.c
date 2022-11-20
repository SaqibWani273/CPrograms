#include<stdio.h>
int main(){
	char str[30],ch;
	int i=0,count=0;
	printf("Enter a String \n");
	gets(str);
	printf("Enter a single character to check its occurence count\n");
	scanf("%c",&ch);
	while(str[i]!='\0')
	{
	
		if(str[i++]==ch)
		count++;
		
	}
	printf("it is %d times present in the sentence",++count);
}