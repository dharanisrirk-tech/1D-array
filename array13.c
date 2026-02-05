#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int marks[N];
    int sum=0;
    for (int i=0;i<N;i++) {
        scanf("%d",&marks[i]);
        sum=sum+marks[i];
    }
    int avg=sum/N;
    int count=0;
    for (int i=0;i<N;i++) {
        if (marks[i]>avg) {
            count++;
        }
    }
    printf("%d",count);

}