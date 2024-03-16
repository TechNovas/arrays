#include <stdio.h>

int main() {
    int marks[5];
    printf("Input Student's Marks:\n");
    for(int i=0; i<5; i++) {
        scanf("%d ",&marks[i]);

        if(marks[i]<35){
            printf("%d ",i);
        }
    }



    return 0;
}