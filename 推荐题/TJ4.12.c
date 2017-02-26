//
//  main.c
//  4.12
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //input
    float x,y;
    scanf("%f",&x);
    
    //cal
    y=1.609*x;
    
    //output
    printf("%.2f\n",y);
    
    return 0;
}
