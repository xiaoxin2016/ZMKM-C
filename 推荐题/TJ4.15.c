//
//  main.c
//  tj415
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define pi 3.1415926

int main(int argc, const char * argv[])
{
    // input
    int r,h;
    scanf("%d",&r);
    scanf("%d",&h);
    
    //cal
    float s,v;
    s=2*pi*r*h;
    v=pi*r*r*h;
    
    //output
    printf("s=%.2f,v=%.02f\n",s,v);
    return 0;
}
