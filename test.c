#include<stdio.h>
int main(){
    int r;
    printf("enter the number of rows: ");
    scanf("%d",&r);
    // printf("enter the number of column: ");
    // scanf("%d",&c);

    for(int i=1;i<=r;r--){
        for(int j=1;j<=r;j++){
            printf("*");
        }
        printf("\n");        
    }
    return 0;
}