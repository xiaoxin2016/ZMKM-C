#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);
    
    float sum,average;
    
    sum=a+b+c+d;
    average=sum/4;
    
    printf("Sum = %.0f; Average = %.1f\n",sum,average);
    return 0;
}
