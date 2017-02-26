//
//  main.c
//  5.10
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    
    if(a>0&&b>0&&c>0&&(a+b>c)&&(a+c>b)&&(b+c>a))
    {
    if((a==b)&&(b==c)&&(c==a))
        printf("equilateral triangle.\n");
    else
        {
            if((a==b)||(b==c)||(c==a))
                printf("isoceles triangle.\n");
            else
            {
                printf("triangle.\n");
            }
        }
    }
    else
        printf("non-triangle.\n");
    return 0;
}
