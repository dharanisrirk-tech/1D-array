#include <stdio.h>
int main() {
    int r, c, i, j, k;
    int a[10][10];
    int min, max, count = 0;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < r; i++) {
        min = a[i][0];
        for (j = 1; j < c; j++)
            if (a[i][j] < min)
                min = a[i][j];
        for (j = 0; j < c; j++) {
            if (a[i][j] == min) {
                max = a[0][j];
                for (k = 1; k < r; k++)
                    if (a[k][j] > max)
                        max = a[k][j];
                if (min == max)
                    count++;
            }
        }
    }
    printf("%d", count);
    return 0;
}
