#include <stdio.h>
int main() {
    int n, i;
    int prices[100];
    int maxFuture;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }
    maxFuture = -1;
    for(i = n - 1; i >= 0; i--) {
        int temp = prices[i];
        prices[i] = maxFuture;
        if(temp > maxFuture)
            maxFuture = temp;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", prices[i]);
    }
    return 0;
}

