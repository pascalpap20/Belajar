#include <stdio.h>
#include <math.h>
int main()
{
    long long int d;
    double kel, luas;

    scanf("%lld", &d);
    kel=2.0*3.14*(d*0.5);
    luas=3.14*(d*0.5)*(d*0.5);

    printf("%.2f %.2f\n", kel, luas);

	return 0;
}

