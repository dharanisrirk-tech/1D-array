#include <stdio.h>
int main() {
    int n, i;
    int days[100];
    int even = 0, odd = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &days[i]);
        if(days[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even:%d Odd:%d", even, odd);

    return 0;
}
