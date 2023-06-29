#include <stdio.h>

int convertToBinary(int num) {
    int binary = 0, base = 1;
    
    while (num > 0) {
        binary += (num % 2) * base;
        num /= 2;
        base *= 10;
    }
    
    return binary;
}

int convertToDecimal(int binary) {
    int decimal = 0, base = 1;
    
    while (binary > 0) {
        decimal += (binary % 10) * base;
        binary /= 10;
        base *= 2;
    }
    
    return decimal;
}

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;
    }
    
    return -1;
}

int main() {
    int size, target;
    
    printf("Input array size: ");
    scanf("%d", &size);
    
    int arr[size];
    
    printf("Input elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Input target: ");
    scanf("%d", &target);
    
    printf("\nThe array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nThe target:\n%d\n\n", target);
    
    int convertedArr[size];
    int convertedTarget;
    
    printf("Converted array:\n");
    for (int i = 0; i < size; i++) {
        convertedArr[i] = convertToBinary(arr[i]);
        printf("%d ", convertedArr[i]);
    }
    
    convertedTarget = convertToBinary(target);
    
    printf("\n\nConverted target:\n%d\n\n", convertedTarget);
    
    printf("Search result:\n");
    int result = linearSearch(convertedArr, size, convertedTarget);
    
    if (result == -1)
        printf("-1\n");
    else
        printf("%d\n", result);
    
    printf("\nOriginal array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n\nOriginal target:\n%d\n", target);
    
    return 0;
}
