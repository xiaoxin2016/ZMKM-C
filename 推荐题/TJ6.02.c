//
//  main.c
//  tj6.02
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int i;
    float n;
    float sum=0;
    
    for (i=1;i<=12;i++)
    {
        scanf("%f",&n);
        sum+=n;
    }
    
    sum/=12;
    
    printf("$%.2f\n",sum);
    return 0;
}
