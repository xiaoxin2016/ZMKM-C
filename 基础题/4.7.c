#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int y,m,d,x;
    scanf("%d",&x);

    //exchange
    y=60*60*24*360;
    m=60*60*24*30;
    d=60*60*24;

    //cal
    int y1,m1,d1;
    y1=2011+x/y;
    m1=x%y/m+1;
    d1=x%y%m/d+1;

    //output
    printf("%d %d %d\n",y1,m1,d1);
    return 0;
}
