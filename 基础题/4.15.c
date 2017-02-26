//
//  main.c
//  4.15
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include "math.h"

int main(int argc, const char * argv[]) {
    int n,m,a,t;
    scanf("%d%d%d",&n,&m,&a);
    t=(int)ceil(n/(a*1.0))*(int)ceil(m/(a*1.0));
    printf("%d\n",t);
    return 0;
}
