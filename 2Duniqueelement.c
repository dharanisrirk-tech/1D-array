#include <stdio.h>
int main() {
    int r, c;
    scanf("%d %d", &r, &c);
    int a[10][10];
    int max = 0;
    int index = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < r; i++) {
        int count = 0;
        for (int j = 0; j < c; j++) {
            int flag = 1;
            for (int k = 0; k < j; k++) {
                if (a[i][j] == a[i][k]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                count++;
            }
        }
        if (count > max) {
            max = count;
            index = i;
        }
    }
    printf("%d", index);
    return 0;
}
