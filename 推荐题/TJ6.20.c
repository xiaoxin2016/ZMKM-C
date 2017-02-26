//
//  main.c
//  tj6.20
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a,b,c;
    
    for (a=0;a<=9;a++)
        for(b=0;b<=9;b++)
            for (c=1;c<100;c++)
            {
                if((c*c==a*1000+a*100+b*10+b)&&(a!=b))
                    printf("%d\n",c*c);
            }
    return 0;
}
