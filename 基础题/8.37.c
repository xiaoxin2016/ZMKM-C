//
//  main.c
//  8.37
//
//  Created by Merck Liu on 2016/11/15.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    
    int n,i,m,a1,b1,j;
    long int a[100],temp1,temp2;
    scanf("%d",&n);
    
    for(i=0; i<n; i++)
        scanf("%ld",&a[i]);
    
    scanf("%d",&m);
    
    for (i=0; i<m; i++)
    {
        scanf("%ld%ld",&temp1,&temp2);
        for(j=0; j<n; j++)
        {
            if(a[j]==temp1)
                a1=j;
            if(a[j]==temp2)
                b1=j;
        }
        printf("%d\n",abs(b1-a1));
    }
    
    return 0;
}
