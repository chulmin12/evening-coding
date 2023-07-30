#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    int n, m, i, j;
    int num[101] = {0,};
    int temp;
    
    scanf("%d %d", &n, &m);

    for (int a = 1; a <=n; a++){
        num[a] = a;
    }

    for (int a = 1; a <= m; a++){
        scanf("%d %d", &i, &j);
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
    }

    for (int a = 1; a <= n; a++){
        printf("%d ", num[a]);
    }
    return 0;
}
