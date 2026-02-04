#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int salary[size];
    for (int i=0;i<N;i++) {
     scanf("%d",&salary[i]);
    }
    int count=0;
    for (int j=0;j<N;j++) {
        if (salary[j]<=i) {
            count++;
        }
    }
