// Your code here...
#include <stdio.h>
int main(){
    int N, sum;
    scanf("%d", &N);
    for(int i; i<=N; i++){
        sum+=i;  
    }
    printf("%d", sum);
    return 0;
}