#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    int X;
    scanf("%d",&X);
    int count=0;
    for (int j=0;j<N;j++) {
        if (arr[j]==X) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
