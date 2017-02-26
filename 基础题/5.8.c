//
//  main.c
//  5.8
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //input&jiance
    int zs;
    scanf("%d",&zs);
    
    if (zs>=10000||zs<1000)
        printf("Invalid data\n");
    else
    {
        //cal
        int g,s,b,q,sum;
        q=zs/1000;
        b=zs/100%10;
        s=zs/10%10;
        g=zs%10;
        
        sum=g+s+b+q;
        
        //judge&print
        if(sum%2==0)
            printf("Yes\n");
        else
            printf("No\n");

        
    }
    
    
    return 0;
}
