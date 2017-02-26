//
//  main.c
//  8.24
//
//  Created by Merck Liu on 2016/11/14.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a[1000],b[100];
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    
    for(i=0; i<m; i++)
        scanf("%d",&a[i]);
    
    for(i=0; i<n; i++)
        scanf("%d",&b[i]);
    
    int count=0;

    for(j=0; j<n; j++)
    {
        for(i=0; i<m; i++)
            if(a[i]==b[j])
                count=1;
        if(count==1)
            printf("YES\n");
        else
            printf("NO\n");
        count=0;
    }
    
        
    return 0;
}
