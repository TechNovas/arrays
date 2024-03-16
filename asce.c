#include<stdio.h>
int main() {
    int arr[1000], size=0;
    int insert=0;
    int position;
    for (int i=0; i < 10; i++) {
        arr[i] = 0;
    }

    printf("Input size of an array: ");
    scanf("%d", &size);

    printf("Input %d elements in the array:\n", size);
    for(int i=0; i<size; i++){
        printf("Element - %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("Insert new element: ");
    scanf("%d", &insert);
    printf("Where to place element: ");
    scanf("%d", &position);
    for(int i=size-1; i>=position-1; i--) {
        // printf("%d",arr[i]);
        arr[i+1] = arr[i];
    }

    arr[position-1]=insert;
    size++;
    printf("the new list is: ");
    for(int i=0; i<size; i++) {
         printf("%d", arr[i]);
    }
     return 0;
    }
   



