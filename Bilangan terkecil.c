#include <stdio.h>

int main(){
    int min=99999,max=0, n;
    int i;
    for(i=0;i<9999;){
        scanf("%d", &n);
        if(n!=-99){
        if(n<min) min=n;
        if(n>max) max=n;
        i++;
        } else break;
    }
    if(i>0)
        printf("%d\n", min);
	else if(i==0) printf("empty\n");
}
