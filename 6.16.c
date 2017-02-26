//
//  main.c
//  6.16
//
//  Created by Merck Liu on 2016/10/19.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,sum=0;
    for (i=1;i<n;i++)
    {
        if (n%i==0)
        {
            sum+=i;
            if(n==sum)
            {
            printf("Yes,its factors are");
            for (i=1;i<n;i++)
            {
               if(n%i==0)
                   printf(" %d",i);
            }
                printf("\n");
            }


        }

    }
    if(n!=sum)
        printf("No\n");

    
        return 0;
}
