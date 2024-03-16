#include <stdio.h>
int main(){
    int arr[100];
    int n;
    printf("input any number: ");
        scanf("%d", &n);

    for(int i=0; i<=n; i++){
    for(int j=i+1; j<=n; j++){
    if(arr[i]==arr[i]){
        printf("%d", arr[i]);
    }
    break;
    }
    }
    return 0;
}