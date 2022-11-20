#include<stdio.h>
int main(){
	char str[30],temp;
	int i=0,j,length;
	printf("Enter a String \n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
//	while(str[i++]!='\0')
	length=i;
	// length=i-1;
	printf("Entered String = %s,length =%d\n",str,length);
	for(j=length,i=0;j>length/2;j--,i++)
	{
		temp=str[i];
		str[i]=str[j];
		str[j]=temp;
	}
	printf("Reverse = %s",str);
}