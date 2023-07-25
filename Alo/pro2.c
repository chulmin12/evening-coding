#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
    주어진 길이 N의 int 배열 arr에서 합이 100인 서로 다른 위치의 두 원소가 존재하면
    1을, 존재하지 않으면 0을 반환하는 함수을 작성하라
    arr의 각 수는 0이상 100이하이고 N은 1000이하이다.
*/

int sumcmp(int arr[],int N){
    for(int i = 0; i<N; i++){
        for(int j = i + 1; j<N; j++){
            if(arr[i] + arr[j] == 100){
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int arr[100];
    int N;
    scanf("%d",&N);
    for(int i = 0; i<N;i++){
        scanf("%d",&arr[i]);
    }
    int res = sumcmp(arr,N);
    printf("%d \n",res);
}