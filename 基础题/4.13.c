#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int v,s;
    scanf("%d %d",&v,&s);

    //cal
    float a;
    a=(v*v)/(2*s*3.6*3.6);

    //output
    printf("%.2f\n",a);

    return 0;
}
