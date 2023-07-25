#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    N이하의 수 중에서 가장 큰 2의 거듭제곱수를 반환하는 함수를 작성하라
    N은 10억 이하의 자연수이다.
*/

int number(int N){
    int val = 1; 
    while (2*val <= N )
    {
        val *= 2;
    }
    return val;
    
}

int main(){
    int N;
    scanf("%d",&N);
    int res = number(N);
    printf("%d",res);
}