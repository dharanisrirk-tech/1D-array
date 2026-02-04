#include <stdio.h>
int main() {
    int n, i, temp;
    int stops[100];
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &stops[i]);
    }
    int left = 0, right = n - 1;
    while(left < right) {
        temp = stops[left];
        stops[left] = stops[right];
        stops[right] = temp;
        left++;
        right--;
    }
    for(i = 0; i < n; i++) {
        printf("%d ", stops[i]);
    }
    return 0;
}
