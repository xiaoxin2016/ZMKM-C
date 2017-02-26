#include <stdio.h>
#include <stdlib.h>

int main()
{
    //define&input
    int x,y,a,b,c,d;
    int h,m;
    scanf("%d%d",&x,&y);

    //processing
    a=x/100;
    b=x%100;
    c=y/100;
    d=y%100;

    if (b-d<0)
    {
        h=c-a;
        m=d-b;

    }
    else
    {
        h=c-a-1;
        m=d+60-b;
    }


    //output
    printf("%02d:%02d\n",h,m);

    return 0;
}
