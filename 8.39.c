//
//  main.c
//  8.39
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int n,x,k,j,count=0;
    scanf("%d",&n);
    
while(n--)
{
    scanf("%d",&x);
    for (j=1,count=0; j<=10000; j++)
    {
        k=j;
        while (k!=0)
        {
            if (k%10==1)
                count++;
            k/=10;
        }
        
        if(j==10000)
        {
            printf("zzz\n");
        }
        else if(count>=x)
        {
            printf("%d\n",j);
            break;
        }
    }
}
    return 0;
}
