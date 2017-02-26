//
//  main.c
//  6.4
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    int n,max;
    max=0;
    
    //cal
    while (scanf("%d",&n),n!=-1)
    {
        if (n>max)
            max=n;
    }
    
    //output
    printf("%d\n",max);
    
    return 0;
}
