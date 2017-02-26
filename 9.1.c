//
//  main.c
//  9.1
//
//  Created by Merck Liu on 2016/11/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
void Fun(int a,int b,int *c)
{
    int x1,x2,y1,y2;
    x1=a%10;
    x2=a/10;
    y1=b%10;
    y2=b/10;
    
    *c=1000*x1+100*y1+10*x2+y2;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
