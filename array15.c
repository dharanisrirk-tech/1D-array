#include <stdio.h>
int main() {
    int n;
    printf("Enter number of orders: ");
    scanf("%d", &n);
    int orders[n];
    printf("Enter the orders:\n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &orders[i]);
    }
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(orders[i] != 0) {
            orders[count++] = orders[i];
        }
    }
    while(count < n) {
        orders[count++] = 0;
    }
    printf("Modified orders:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", orders[i]);
    }
    return 0;
}
