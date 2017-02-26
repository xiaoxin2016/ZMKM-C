//
//  main.c
//  tj6.14
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);

    int a,b,min=n;
    for (int i=1;i<=sqrt(n);i++)
    {
       if(n%i==0)
           b=n/i;
        if((i+b)<min)
            a=i,min=i+b;
        
    }
    printf("%d\n",a);
    
    return 0;
}
