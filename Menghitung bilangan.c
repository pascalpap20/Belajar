#include <stdio.h>

int main(){
    int angka, i=0,j=0, n;

    scanf("%d", &angka);
    while(angka!=-99){
        scanf("%d", &n);
        if(n!=-99){
            if(n<=angka)i++;
            else if(n>angka)j++;
        } else if(n==-99) break;
    }
    if(i==0 && j==0) printf("0 0\n");
    else if(i!=0 || j!=0) printf("%d %d\n", i+1, j);

}
