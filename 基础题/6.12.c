//
//  main.c
//  6.12
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    int g,s,b;
    
    b=n/100;
    s=(n-b*100)/10;
    g=(n-b*100)%10;
    
    for(n=100;n<=999;n++)
    {
        //数字的分解
        b=n/100;
        s=(n-b*100)/10;
        g=(n-b*100)%10;
        
        //条件
        if (pow(g,3)+pow(s,3)+pow(b,3)==n)
            printf("%d\n",n);
    }
    
    
    
    
    
    return 0;
}
