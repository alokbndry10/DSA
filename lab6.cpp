//Write a program to find the factorial of an input number using recursive function
#include<stdio.h>
int facto(int num);
int main()
{
	int num;
	printf("\t\t****************\n");
	printf("\t\t   Factorial\n");
	printf("\t\t****************\n");
	printf("Enter the number to calculate its factorial\n");
	scanf("%d",&num);
	printf("The factorial of %d is\n%d",num,facto(num));
	return 0;
}
int facto(int num){
	if(num==0||num==1)
	{
		return 1;
	}
	else
	{
		return num*facto(num-1);
	}
}
