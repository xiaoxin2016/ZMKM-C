//
//  main.c
//  6.13
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
long jc(int n)
{
    if(n==0)
        return 1;
    return n*jc(n-1);
}


int main(int argc, const char * argv[]) {
    int x;
    int g,s,b;
    
    for (x=100;x<=999;x++)
    {
        b=x/100;
        s=(x-b*100)/10;
        g=(x-b*100)%10;
        
        if(x==jc(g)+jc(s)+jc(b))
        {
            printf("%d\n",x);
        }
    }
    
    
    return 0;
}
