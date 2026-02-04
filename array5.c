#include <stdio.h>
int main() {
    int n;
    int roll[100];
    int actualSum = 0, expectedSum;
    scanf("%d", &n);
    for(int i = 0; i < n - 1; i++) {
        scanf("%d", &roll[i]);
        actualSum += roll[i];
    }
    expectedSum = n * (n + 1) / 2;
    printf("%d", expectedSum - actualSum);
    return 0;
}
