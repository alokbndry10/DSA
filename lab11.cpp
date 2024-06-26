#include <stdio.h>
#include <conio.h>
int LinearSearch(int A[], int n, int key)
{
    int i, pos, flag = 0;
    for (i = 0; i < n; i++)
    {
        if (A[i] == key)
        {
            pos = i;
            flag = 1;
        }
    }
    if (flag == 1)
    {
        printf("\nSearch Found!!!\n");
        printf("\nThe position of number %d is %d.", key, pos);
    }
    else
    {
        printf("The number is not available in the array.");
    }
}
int main()
{
    {
        int n, key;
        printf("******************************\n");
        printf("\tLINEAR SEARCH\n");
        printf("******************************\n\n");
        printf("Enter the size of array:\t");
        scanf("%d", &n);
        int a[n], i;
        printf("\nEnter the elements of array:\n");
        for (i = 0; i < n; i++)
        {
            printf("a[%d]=\t", i);
            scanf("%d", &a[i]);
        }
        printf("\nEnter the element to search:\t");
        scanf("%d", &key);
        LinearSearch(a, n, key);
    }
}