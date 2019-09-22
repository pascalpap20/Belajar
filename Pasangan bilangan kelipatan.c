#include <stdio.h>

int main(){
    int k=0,i, n, a,b;

    scanf("%d", &n);
    for(i=1;i<=n;i++){
        scanf("%d %d", &a, &b);
        if(a%b==0 || b%a==0) k++;
    }
    printf("%d\n", k);
}
