//
//  main.c
//  8.25
//
//  Created by Merck Liu on 2016/11/14.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n,i,a[100],x;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    scanf("%d",&x);
    
    if(x<=a[0])
    {
        printf("%d ",x);
        for (i=0; i<n; i++)
        {
            printf("%d",a[i]);
            if(i!=n-1)
                putchar(' ');
        }
        putchar('\n');
        
    }
    else
    {
        if(x>=a[n-1])
        {
            for (i=0; i<n; i++)
            {
                printf("%d",a[i]);
                if(i!=n)
                    putchar(' ');
            }
            printf("%d\n",x);
        }
        else
        {
            
            for (i=0; i<n; i++)
            {
                if ((x<=a[i+1]&&x>a[i]))
                {
                    printf("%d",a[i]);
                    if(i!=n-1)
                        putchar(' ');
                    printf("%d ",x);
                }
                else
                {
                    printf("%d",a[i]);
                    if(i!=n-1)
                        putchar(' ');
                }
                
            }
            putchar('\n');
            
        }
    }
       return 0;
}
