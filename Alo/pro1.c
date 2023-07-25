#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    N 이하의 자연수 중에서 3의 배수이거나 5의 배수인 수를 모두 합한 값을
    반환하는 함수를 작성하라. N은 10만 이하의 자연수이다.
*/

int main(){
    int N;
    int res = 0;
    scanf("%d",&N);
    for(int i = 1;i<=N;i++){
        if(i%3==0 || i%5==0){
            res += i;
        }
    }
    printf("%d\n",res);
}