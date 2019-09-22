#include <stdio.h>
#include <math.h>

int main(){
    int a, b ,c;
    double x1, x2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    x1 = (-b + sqrt(b*b-4*a*c))/2*a;
    x2 = (-b - sqrt(b*b-4*a*c))/2*a;

    printf("%.2lf %.2lf\n", x1, x2);

    return 0;
}
