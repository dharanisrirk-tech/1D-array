#include <stdio.h>
int main() {
    int n, k, i, j, temp;
    int shift[100];
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        scanf("%d", &shift[i]);
    }
    scanf("%d", &k);
    for(i = 0; i < k; i++) {
        temp = shift[0];
        for(j = 0; j < n - 1; j++) {
            shift[j] = shift[j + 1];
        }
        shift[n - 1] = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", shift[i]);
    }
    return 0;
}
