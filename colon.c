#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
    char kata[10000], kiri[10000], kanan[10000];
    char *token;
    int n,i;
    int panjangKiri,panjangKanan;
    scanf("%d ", &n);
    for(i=0;i<n;i++){
        fgets(kata,sizeof(kata),stdin);
	        if(strstr(kata,":")==0)printf("N\n");
	       	else{
	            token=strtok(kata,":"); strcpy(kiri,token);
	            token=strtok(NULL,":\n"); strcpy(kanan,token);
	            panjangKiri=strlen(kiri);
	            panjangKanan=strlen(kanan);

	            if(panjangKiri==panjangKanan){
	                if(strcmp(kiri,kanan)==0) printf("S\n");
	                else if(strcmp(kiri,kanan)!=0) printf("D\n");
	            }
	            else if(panjangKiri<panjangKanan) printf("R\n");
	            else if(panjangKiri>panjangKanan) printf("L\n");
	            else printf("N\n");
	        }
    }

    return 0;
}

