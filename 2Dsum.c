#include<stdio.h>
int main() {
    int r,c;
    printf("enter the value for row & column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("enter the value for array\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) {
            sum=sum+arr[i][j];
        }
        printf("%d students mark is %d\n",i+1,sum);
    }
    return 0;
}