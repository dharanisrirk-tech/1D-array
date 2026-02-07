#include<stdio.h>
int main() {
    int r,c;
    printf("enter the r and c");
    scanf("%d %d", &r, &c);
    int arr[r][c];
    printf("enter the array");
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    int max1=arr[0][0];
    int max2=arr[0][0];
    for (int i = 1; i <= r; i++) {
        for (int j = 1; j <= c; j++) {
            if (arr[i][j] > max1) {
                max2 = max1;
                max1 = arr[i][j];
            }
            else if (arr[i][j] < max1 && arr[i][j] > max2) {
                max2 = arr[i][j];
            }
        }
    }
    printf("%d", max2);
    return 0;
}