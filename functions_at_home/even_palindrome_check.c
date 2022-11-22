#include<stdio.h>

void evenCheck(int);
void palindromeCheck(int);
int main()
{

	int num;
	printf("Enter a number\n");
	scanf("%d",&num);
void evenCheck(int num);
void palindromeCheck(int num);


}//end of main

void evenCheck(int num)
{
	if(num%2==0)
	printf("%d is even\n",num);
	else
	printf("%d is odd\n",num);
}
void palindromeCheck(int num)
{
	int rev=0,temp=num;
     while(temp)
     {
     	rev+=temp%10;
     	rev*=10;
     	temp/=10;
	 }
	 // removing one extra 0 from rev
	 rev/=10;
	 if(rev==num)
	 printf("yes, %d is a Palindrome\n",num);
	 else
	 printf("%d is not a Palindrome\n ",num,rev);
}