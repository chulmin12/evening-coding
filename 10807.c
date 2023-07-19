#define _CRT_SECURE_NO_WARNING 
#include <stdio.h>

/*
총 N개의 정수가 주어졌을 때, 
정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
*/

int main(){
    int N, v;
    int num[100];
    int cnt = 0;
    scanf("%d\n",&N);
    for(int i=0; i< N; i++){
        scanf("%d",&num[i]);
    }
    scanf("%d",&v);
    for(int j=0; j<N;j++){
        if(num[j] == v){
            cnt++;
        }
    }
    printf("%d",cnt);
}