#include<stdio.h>

int main(){
    int uang, pecahan,t;
    float x;

    scanf("%d %d", &uang, &pecahan);

    x= 1.0*uang/pecahan;

	if(uang%pecahan==0){
    	x=ceil(x);
    	t= pecahan*x;
    } else if(uang%pecahan>=pecahan/2){
    	x=ceil(x);
    	t=pecahan*x;
    } else  if(uang%pecahan<pecahan/2){
    	x=floor(x);
    	t=pecahan*x;
    }

    printf("%d\n", t);
}
