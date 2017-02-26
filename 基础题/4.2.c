#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    char c;
    int b;
    scanf("%f %d %c %f",&x,&b,&c,&y);
    printf("%c %d %.2f %.2f\n",c,b,x,y);
    return 0;
}
