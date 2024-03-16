#include<stdio.h>

int main(){
    int arr[5] = {5,7,4,15,1};
    int max = -1;
    int min = arr[0];
    for(int i=0; i<5; i++){
        if(max<arr[i]){ // False
            max = arr[i];
        }
        if(min>arr[i]){
                min = arr[i];
            }
    }
printf("Your maximum value is: %d\n ", max);
printf("The minimum value is: %d\n", min);
return 0;
}

// Min: 5
// Max: 7
// arr[i] = 7