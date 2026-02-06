#include<stdio.h>
int main() {
    int N,f=1;
    scanf("%d",&N);
    int A[N];
    for(int i=0;i<N;i++) {
        scanf("%d",&A[i]);
    }
    for (int i=0;i<N/2;i++) {
        if (A[i]!=A[N-1-i])
            f=0;
        }
        if (f==1) {
            printf("yes");
        }
        else {
            printf("no");
        }

    return 0;
}