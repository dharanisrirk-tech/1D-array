#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[r][c];
    int max = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        for (int k = i + 1; k < r; k++) {
            for (int j = 0; j < c; j++) {
                for (int l = 0; l < c; l++) {
                    int product = a[i][j] * a[k][l];
                    if (product > max) {
                        max = product;
                    }
                }
            }
        }
    }
    printf("%d", max);
    return 0;
}