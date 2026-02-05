#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    int total = 0;
    for(int i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    int left = 0;
    for (int i = 0; i < N; i++) {
        int right = total - left - arr[i];
        if (left == right) {
            printf("%d", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1");
    return 0;
}
