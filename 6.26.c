//
//  main.c
//  6.26
//
//  Created by Merck Liu on 2016/10/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int m,n;
    scanf("%d %d",&m,&n);
    
    int p=1;
    for(;n;n--)
    {
        p*=m;
        p=p%1000;
    }
    
    printf("The last 3 digits of %d ** %d is: %03d\n",m,n,p);
    
    return 0;
}
