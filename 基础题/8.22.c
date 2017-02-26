//
//  main.c
//  8.22
//
//  Created by Merck Liu on 2016/11/11.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    int n;
    int k=0,find=0;
    scanf("%d",&n);
    
    int i,j,a[100],b[100];
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (i=0; i<n; i++)
    {
        for (j=i+1; j<n; j++)
        {
            if(a[j]==a[i])
            {
                b[k++]=a[i];
            }
        }
    }
    
    for (i=0; i<k; i++)
    {
        for (j=0; j<i; j++)
        {
            if(b[j]==b[i])
            {
                break;
            }
        }
        
        if(j==i)
        {
            if (find)
            {
                putchar(' ');
            }
            printf("%d",b[i]);
            find=1;
            
        }
    }
    if(!find)
        printf("Not Found");
    
    putchar('\n');
    
    return 0;
}
