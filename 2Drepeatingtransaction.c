#include<stdio.h>
int main() {
    int r,c;
    printf("Enter value of r and c:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    printf("Enter value of array:\n");
    for(int i=0;i<r;i++) {
        for(int j=0;j<c;j++) {
            scanf("%d",&arr[i][j]);
        }
    }
    for (int i=0;i<r;i++) {
        for (int j=i+1;j<c;j++) {
            int b = 0;
            for (int k=0;k<r;k++) {
                for (int l=0;l<c;l++) {
                    if (arr[i][j]==arr[k][l]) {
                        b = arr[i][j];
                        break;
                    }
                }
                if (b!=0)
                    break;
            }
            printf("%d ", b);
            return 0;
        }
    }

}