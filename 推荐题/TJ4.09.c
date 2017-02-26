#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    
    float p,mj;
    p=(a+b+c)/2;
    mj=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("%.2f\n",mj);
    
    return 0;
}
