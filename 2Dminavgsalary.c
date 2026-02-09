#include <stdio.h>
int main() {
    int r, c;
    int a[10][10];
    int i, j;
    int sum, minSum, index = 0;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    minSum = 0;
    for (j = 0; j < c; j++) {
        minSum = minSum + a[0][j];
    }
    for (i = 1; i < r; i++) {
        sum = 0;
        for (j = 0; j < c; j++) {
            sum = sum + a[i][j];
        }
        if (sum < minSum) {
            minSum = sum;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}