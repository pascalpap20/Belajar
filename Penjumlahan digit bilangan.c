#include <stdio.h>

int main(){
    int bagi, n, digit=0;

    scanf("%d", &n);
    while(n!=0){
        digit += n%10;
        bagi = n/10;
        n=bagi;
    }
    printf("%d\n", digit);
}
