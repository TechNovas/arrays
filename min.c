#include<stdio.h>
    int main() {
        int arr[5] = {2,5,3,8,67};
        int min = arr[0];
        for(int i=0; i<5; i++){
        if(min>arr[i]){
            min = arr[i];
        }
        }
        printf("The minimum value is: %d\n",min);
    
    }