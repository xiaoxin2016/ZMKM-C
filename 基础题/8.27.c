//
//  main.c
//  8.27
//
//  Created by Merck Liu on 2016/11/14.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int i,j,t,a[100],flag=0;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    //paixu
    
    for(i=0; i<n; i++)
    {
        for (j=0; j<n-i; j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    
    for(i=0; i<n-1; i++)
    {
       if(a[i+1]-a[i]!=-1)
            flag=1;
    }
    
    if(flag)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
