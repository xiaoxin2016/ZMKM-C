#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int t,j,f,h;
    scanf("%d %d",&h,&f);

    //processing
    t=(f-2*h)/2;
    j=h-t;

    //output
    printf("rabbit=%d,chicken=%d\n",t,j);

    return 0;
}
