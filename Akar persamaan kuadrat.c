#include <stdio.h>
#include <math.h>

int main(void){
	double a, b ,c, D;
	scanf("%lf %lf %lf", &a, &b, &c);
	D = sqrt((b*b)-4*a*c);
	if(D>0)
		printf("2");
	else if(D==0)
		printf("1");
	 else printf("0");

	printf("\n");

}
