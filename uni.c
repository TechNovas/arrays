#include <stdio.h>

int main() {
    int arr[10];
    int size, i, j, count = 0;

    printf("Input the number of elements to be stored in the array: ");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n", size);
    for (i = 0; i < size; i++) {
        printf("element - %d : ", i);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j > size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                break; 
            }
        }
    }

    printf("Total number of unique elements found in the array is: %d\n", count);

    return 0;
}

