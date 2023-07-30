#define _CRT_SCURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int num[31] ={0,};
    int st;

    for(int i= 1; i<29;i++){
        scanf("%d",&st);
        num[st] = st;
    }
    for(int i = 1; i<31; i++){
        if(num[i] == 0){
            printf("%d\n",i);
        }
    }
}