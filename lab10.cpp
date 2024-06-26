#include <stdio.h>

// Function to perform binary search
int BinarySearch(int A[], int l, int r, int key) {
    while (l <= r) {
        int mid = l + (r - l) / 2;

        // Check if key is present at mid
        if (A[mid] == key) {
            return mid; // key found at mid
        }

        // If key greater, ignore left half
        if (A[mid] < key) {
            l = mid + 1;
        }
        // If key is smaller, ignore right half
        else {
            r = mid - 1;
        }
    }
    // key is not present in array
    return -1;
}

int main() {
    int n, key;

    printf("\t*********************\n");
    printf("\t    Binary Search\n");
    printf("\t*********************\n");

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array in sorted order:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int result = BinarySearch(a, 0, n - 1, key);

    if (result != -1) {
        printf("Search Found!!\n");
        printf("The position of the number %d is %d\n", key, result);
    } else {
        printf("The number is not in the array\n");
    }

    return 0;
}
