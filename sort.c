#include<stdio.h>
 
int main(){
int arr[100], position, c, n;
printf("enter size of an array: ");
scanf("%d", &n);


for(c=1; c<=n; c++){
printf("enter %d element", c);
scanf("%d", &arr[c]);
}

printf("Enter element you want to delete: ");
scanf("%d", &position);

if(position>=n+1)
printf("seletation not possible");
else 
{
    // for( c = position-1; c<n-1; c++)
    // arr[c]=arr[c+1];
    // printf("result: ");
    for (c = 1; c < n; c++)
            printf("%d\n", arr[c]);
    
    }
    return 0;
}