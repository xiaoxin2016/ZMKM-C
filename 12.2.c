//
//  main.c
//  12.2
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a1,b1,a2,b2;
    scanf("%d/%d%d/%d",&a1,&b1,&a2,&b2);
    double t1,t2;
    t1=(double)a1/b1;
    t2=(double)a2/b2;
    
    if (t1<t2)
        printf("%d/%d < %d/%d\n",a1,b1,a2,b2);
    if (t1==t2)
        printf("%d/%d = %d/%d\n",a1,b1,a2,b2);
    if (t1>t2)
        printf("%d/%d > %d/%d\n",a1,b1,a2,b2);
    return 0;
}
