#include<stdio.h>
int main() {
    int r,c;
    printf("Enter the value of r and c : ");
    scanf("%d%d",&r,&c);
    int arr[r][c];
    printf("Enter the value of array:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int count=0;
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            if(arr[i][j]==1) {
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}