#include <stdio.h>
#include <math.h>

int main(){
    int x1,y1,x2,y2,x3,y3;
    int sisi1, sisi2;
    scanf("%d %d",&x1, &y1);
    scanf("%d %d",&x2, &y2);
    scanf("%d %d",&x3, &y3);

    sisi1 = sqrt(((x3-x1)*(x3-x1))+(y3-y1)*(y3-y1));
    sisi2 = sqrt(((x3-x2)*(x3-x2))+(y3-y2)*(y3-y2));

    if(sisi2>sisi1) printf("1\n");
    else if(sisi1>sisi2) printf("2\n");
    else if(sisi1==sisi2) printf("12\n");

    return 0;
}
