//
//  main.c
//  tj4.14
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // input
    int a;
    scanf("%d",&a);
    
    //cal
    int x,y,z,t;
    x=a/100;
    y=(a-x*100)/10;
    z=a%10;
    t=x+y+z;
    

    //output
    printf("%d\n",t);
    
    return 0;
}
