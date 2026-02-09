#include <stdio.h>
int main() {
    int r, c, i, j;
    int a[10][10];
    int index = 0;
    int product, maxProduct;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    maxProduct = 1;
    for (j = 0; j < c; j++)
        maxProduct = maxProduct * a[0][j];
    for (i = 1; i < r; i++) {
        product = 1;
        for (j = 0; j < c; j++)
            product = product * a[i][j];
        if (product > maxProduct) {
            maxProduct = product;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}
