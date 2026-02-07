#include<stdio.h>
int main () {
    int r,c;
    printf("enter the value for row & column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("enter the value for the element:\n");
    for (int i=0;i<r;i++) {
        for (int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    int maxsum=0;
    int maxmonth=0;
    for (int i=0;i<r;i++) {
        int sum=0;
        for (int j=0;j<c;j++) {
            sum=sum+arr[i][j];
        }
        if (sum>maxsum) {
            maxsum=sum;
            maxmonth=i;
        }
        printf("%d has the highest salary\n",maxmonth+1);
    }

}