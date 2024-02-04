//Write a program in c to implement the fibonacci series using recursive function
#include<stdio.h>
int fibo(int);
int main()
{
	int num;
    int i=0;
	printf("\t\t******************\n");
	printf("\t\tFibonacci Series\n");
	printf("\t\t******************\n");
	printf("Enter the number of terms:\n");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		printf("%d\t",fibo(i));
	}
	return 0;
}
int fibo(int num)
{
	if(num==0)
	{
		return 0;
	}
	else if(num==1)
	{
		return 1;
	}
	else
	{
		return fibo(num-1)+fibo(num-2);
	}
}
