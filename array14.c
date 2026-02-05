#include <stdio.h>
int main() {
    int n;
    int prices[n];
    int min ;
    int positive = 0;
    scanf("%d %d", &n ,&min);
    for(int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
        if(prices[i] > 0 && prices[i] < min) {
            min = prices[i];
            positive = 1;
        }
    }
    if(positive == 1)
        printf("%d", min);
    else
        printf("No positive");

    return 0;
}
