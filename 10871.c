#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    정수 N개로 이루어진 수열 A와 정수 X가 주어진다. 이때, 
    A에서 X보다 작은 수를 모두 출력하는 프로그램을 작성하시오.
*/

int main(){
    int N ;
    int x;
    int a[10000];
    scanf("%d %d",&N,&x);
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for(int j=0;j<N;j++){
        if(x > a[j]){
            printf("%d ",a[j]);
        }
    }
    return 0;
}