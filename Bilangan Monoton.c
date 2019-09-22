#include <stdio.h>

int main(){
    long int a, b, c, d;

    scanf("%ld %ld %ld %ld", &a, &b,&c,&d);

    if(a==b && b==c && c==d){
        printf("KONSTAN\n");
    }
    else if(a>=b && b>=c && c>=d){
        printf("MONOTON MENURUN\n");
    }
    else if(a<= b && b<=c && c<=d){
        printf("MONOTON MENAIK\n");
    }
    else printf("TIDAK MONOTON\n");

    return 0;

}
