//Write a program to find out the Greatest Common divisor of two numbers
#include<stdio.h>
int gcd(int a, int b);
int main()
{
	int a,b;
	printf("\t\t************\n");
	printf("\t\tGCD\n");
	printf("\t\t************\n");
	printf("Enter the value of both the numbers(a,b):\n");
	scanf("%d%d",&a,&b);
	printf("The GCD Of (%d,%d) is:\n%d",a,b,gcd(a,b));
	return 0;
}
//Function to calculate GCD
int gcd(int a, int b)
{
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}






