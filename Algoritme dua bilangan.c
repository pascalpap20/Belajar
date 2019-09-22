#include <stdio.h>

int main(){
    int n;
    int x, y;
    float hasil;

    scanf("%d", &n);

    while(n!=9){
            scanf("%d %d", &x, &y);
                if(n == 1){
                    hasil = x + y;
                    printf("%.2f\n", hasil);
                } else if(n == 2){
                    hasil = x - y;
                    printf("%.2f\n", hasil);
                } else if(n == 3){
                    hasil = x*y;
                    printf("%.2f\n", hasil);
                } else if(n == 4){
                        if(y == 0){
                        hasil = (float)1.0*x/1;
                        printf("%.2f\n", hasil);
                    } else {
                        hasil = (float)1.0*x/y;
                        printf("%.2f\n", hasil);
                        }
                }
                        scanf("%d", &n);
    }



    return 0;

}
