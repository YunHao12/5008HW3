#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int target, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        
        if (arr[mid] == target)
            return mid;
        
        if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }
    
    return -1;
}

// Function to sort the array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    printf("Input array size: ");
    scanf("%d", &n);

    int arr[n];
    printf("Input elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Input target: ");
    scanf("%d", &target);

    printf("\nThe array:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\nThe target:\n%d\n\n", target);

    bubbleSort(arr, n);

    printf("Search result:\n");
    int result = binarySearch(arr, target, 0, n - 1);
    if (result == -1) {
        printf("-1\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
