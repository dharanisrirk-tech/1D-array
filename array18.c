#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int arr[N];
    for (int i=0;i<N;i++) {
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<N;i++) {
        if (arr[i]>0) {
            printf("%d ",arr[i]);
        }
        else {
            printf("%d ",0);
        }
    }
    return 0;
}