//
//  main.c
//  5.2
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    int x;
    scanf("%d",&x);
    
    //cal
    int y;
    
    if(x<6)
        y=x-12;
    else if(x<15)
        y=3*x-1;
    else y=5*x+9;
    
    //output
    printf("%d\n",y);
    return 0;
}
