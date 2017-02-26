//
//  main.c
//  8.40
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,j,a[100],b[100]={0},count=0;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<n; i++)
    {
        for (j=0; j<n; j++)
        {
            if(a[i]+b[j]<=100)
            {
                b[j]+=a[i];
                printf("%d %d\n",a[i],j+1);
                break;
            }
        }
    }
    
    for (i=0; i<n; i++)
    {
        if(b[i]>0)
            count++;
    }
    printf("%d\n",count);
    return 0;
}
