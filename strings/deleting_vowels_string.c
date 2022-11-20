#include<stdio.h>
int main(){
	char str[50],deletedVowels[45];
	int i=0,j,k=0,length;
	printf("Enter a String \n");
	gets(str);

	while(str[i++]!='\0');
	length=i;
	i=0;
	printf("String = %s\n",str);
	// length=no.of chars in string
	while(i<length)
	{
		if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		{
			// to remove last char
			length--;
			// to stored to be deleted vowels
			deletedVowels[k++]=str[i];
			
			// to replace particular vowel char with next char 
				for(j=i;j<length;j++)
		           str[j]=str[j+1];
		           
		}
		else
		i++;
	
	}
	str[length]='\0';
	printf("\n After deleting vowels : \n String = %s\n No.of Vowels deleted =%d",str,k);
		printf("\nDeleted vowels were = ");
	for(i=0;i<k;i++)
	{
	printf("%c, ",deletedVowels[i]);
	}
	
	
}