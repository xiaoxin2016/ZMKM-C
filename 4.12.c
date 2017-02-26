#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input

    float x,v,per,money;
    scanf("%f %f %f %f",&x,&v,&per,&money);

    //cal
    float t,zj;
    t=x/v;
    zj=(x/per)*money;

    //output
    printf("%.1f %.1f\n",t,zj);

    return 0;
}

