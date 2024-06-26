//write a program to arrange the user input into ascending order using shell sort ( display all passes)
#include <stdio.h>

void shellSort(int arr[], int n) {
    int i, j, temp, gap;
    for (gap = n/2; gap > 0; gap /= 2) {
        for (i = gap; i < n; i++) {
            temp = arr[i];
            for (j = i; j >= gap && arr[j - gap] > temp; j -= gap) {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
        }
        // Print the current pass
        printf("Gap %d Pass: ", gap);
        for (int k = 0; k < n; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    printf("Initial array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    
    shellSort(arr, n);
    
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    return 0;
}