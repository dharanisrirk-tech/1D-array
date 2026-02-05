#include <stdio.h>
int main() {
    int n, sum;
    int a[n];
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &sum);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == sum) {
                printf("%d %d", a[i], a[j]);
                return 0;
            }
        }
    }
    printf("No pair");
    return 0;
}
