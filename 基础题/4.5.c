#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int a,b;
    scanf("%d %d",&a,&b);

    //process
    int x1,x2,x3,x4,x5;
    x1=a+b;
    x2=a-b;
    x3=a*b;
    x4=a/b;
    x5=a%b;

    //output
    printf("%d+%d=%d\n",a,b,x1);
    printf("%d-%d=%d\n",a,b,x2);
    printf("%d*%d=%d\n",a,b,x3);
    printf("%d/%d=%d\n",a,b,x4);
    printf("%d%%%d=%d\n",a,b,x5);

}
