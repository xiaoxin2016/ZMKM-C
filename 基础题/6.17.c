//
//  main.c
//  6.17
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

    int main(int argc, const char * argv[]) {
        int a,b;
        scanf("%d %d",&a,&b);
        
        int i,t;
        for (i=a;i<=b;i++)
        {
            for(t=2;t<=i;t++)
            {
                if (i%t==0)
                    break;
            }
            if(t==i)
                printf(" %d",i);

            
        }
        printf("\n");
        return 0;
    }
