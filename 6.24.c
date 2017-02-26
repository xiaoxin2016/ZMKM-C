//
//  main.c
//  6.24
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    long long sum=1;
    int ts;
    scanf("%d",&ts);
    
    for (; ts; ts--) {
        sum=(sum+(ts-1))*2;
    }
    
    sum/=2;
    //抵消最后一次天数为0的时候空乘的2.
    
    printf("The monkey got %lld peachs in first day.\n",sum);
    return 0;
}
