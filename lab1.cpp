//Write a program to demonstrate malloc(), calloc(), realloc() and free().
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int* ptr;
	int num;
	
	
	printf("\t\t******************\n");
	printf("\t\tDynamic Memory Allocation\n");
	printf("\t\t******************\n");
	
	printf("\t\tFor Malloc\n");
	printf("Enter the value of num:\n");
	scanf("%d",&num);
	
	ptr=(int*)malloc(num*sizeof(int));
	printf("The value of ptr is: %d\n\n",ptr);
	
	printf("For Calloc\n");
	int i;
	int* ptr1;
	
	printf("Enter the new value of n:\n");
	scanf("%d",&num);
	
	ptr1=(int*)calloc(num, sizeof(int));
	printf("The values are:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",ptr[i]);
	}
	printf("\n\n");
	
	printf("Enter the value in the array:\n");
	for(i=0;i<num;i++)
	{
		scanf("%d",&ptr[i]);
	}
	printf("\n");
	printf("The values in the array is:\n");
	for(i=0;i<num;i++)
	{
		printf("%d\t",ptr[i]);
	}
	
	printf("\n\n");

	printf("For realloc\n");
	ptr1=(int*)realloc(ptr1, 5*sizeof(int));
	printf("\n\n");
	printf("Enter the new value:\n");
	
	for(i=num;i<5;i++)
	{
		scanf("%d",&ptr[i]);
	}
	
	printf("The values in the array after reallocation\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",ptr[i]);
	}
             //free allocated memory
            free(ptr);
            free(ptr1);
	return 0;
}
