//Write a program to display the moves in Tower of Hanoi problem for user input no of disk
#include<stdio.h>

int count=0;
int TOH(int n, char source, char temp, char dest)
{
	if(n==1)
	{
		printf("Move disk from %c to %c\n",source,dest);
		count++;
		return count;
	}
	else
	{
		TOH(n-1,source,dest,temp);
		printf("Move disk from %c to %c",source,dest);
		count++;
		TOH(n-1,temp,source,dest);
	}
}

int main()
{
	printf("\t\t****************\n");
	printf("\t\tTower Of Hanoi\n");
	printf("\t\t****************\n");
	int num;
	printf("Enter the number of disks:\n");
	scanf("%d",&num);
	
	TOH(num,'A','B','C');
	printf("The number of steps is %d\n",count);
	
	return 0;
}
