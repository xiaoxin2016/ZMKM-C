//
//  main.c
//  7.2
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int MergeData (int num1, int num2)
{
    int a,b,c,d;
    a=num1/10;
    b=num1%10;
    c=num2/10;
    d=num2%10;
    
    int newnum;
    newnum=c+10*a+100*d+b*1000;
    
    return newnum;
}


int main()
{
    int num1, num2, newnum;
    scanf("%d%d", &num1, &num2);
    newnum = MergeData(num1, num2);
    printf("newnum=%d\n", newnum);
    return 0;
}
