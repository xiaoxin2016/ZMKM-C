//
//  main.c
//  tj4.13
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //input
    float x,y,n1,n2;
    scanf("%f %f %f %f",&x,&y,&n1,&n2);
    
    //cal
    float z,pj;
    z=n1*x+n2*y;
    pj=z/(n1+n2);
    
    //output
    printf("%.2f\n",pj);
    
    
    return 0;
}
