#include<stdio.h>
#define N 10000

int main(){
    int arr[N];
    int i,j,n,q,y;
    int count,sum=0;

    scanf("%d", &n);
    for(i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &q);
    for(i=0;i<q;i++){
        scanf("%d", &y);
        for(j=0;j<n;j++){
            count=0;
            sum+=arr[j];
            if(y<=sum){
                count++;
                break;
            }
        }
        if(count>0) printf("%d\n", j+1);
        sum=0;

    }
    return 0;
}
