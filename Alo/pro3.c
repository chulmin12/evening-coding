#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    N이 제곰수이면 1을 반환하고 제곱수가 아닌면 0을 반환하는 함수를 작성하라
    N은 10억 이하의 자연수이다.
*/

int square_number(int N){
    for(int i = 1; i * i <= N; i++){
        if(i*i == N){
            return 1;
        }
    }
    return 0;
}

int main(){
    int N;
    scanf("%d",&N);
    int res = square_number(N);
    printf("%d",res);
}