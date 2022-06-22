#include <stdio.h>
struct vector{
    float x;
    float y;
};
int main()
{
    struct  vector v1,v2,sum;
    scanf("%f %f %f %f",&v1.x,&v1.y,&v2.x,&v2.y);
    sum.x =v1.x+v2.x;
    sum.y = v1.y+v2.y;
    printf("(%.1f,%.1f)",sum.x,sum.y);
    return 0;
}

