//
//  main.c
//  5.1
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b;
    scanf("%d %d",&a,&b);
    
    if(a>b)
        printf("max=%d\n",a);
    else
        printf("max=%d\n",b);
    
    return 0;
}
