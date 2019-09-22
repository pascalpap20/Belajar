#include <stdio.h>

int main(){
    int n, x, hasil;

    scanf("%d", &n);

        while(n--){

        scanf("%d", &x);

        x = (x<0)?-x:x;
        hasil = 0;

         while(x!=0){
            hasil = hasil + (x%10);
            x = x/10;

            }
            printf("%d\n", hasil);
        }

    return 0;
}
