#include <stdio.h>
#include <stdlib.h>

int main()
{
    //input
    int y,j,f;
    scanf("%d %d %d",&y,&j,&f);

    //cal
    int yuan,gd2;
    yuan=y+0.5*j/1+0.1*f/1;
    gd2=50*j%100+10*f%100;

    //output
    printf("Dollars=%d\nChange=%d\n",yuan,gd2);
    return 0;
}
