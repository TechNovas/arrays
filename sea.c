#include <stdio.h>

int main() {
    int arr[] = {12, 45, 67, 89, 34, 56, 78, 90};

    int target = arr[5];

    int i;
    for (i = 0; i < 8; i++) {
        if (arr[i] == target) {
            printf("Target value %d found at position %d\n", target, i);
            break;
        }
    }

    if (i == 8) {
        printf("Target value %d not found in the array\n", target);
    }

    return 0;
}
