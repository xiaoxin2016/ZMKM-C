//
//  main.c
//  8.6
//
//  Created by Merck Liu on 2016/11/4.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int N[100],max=0,maxnum,min=10000,minnum;
    
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&N[i]);
        if (N[i]>max)
        {
            maxnum=i;
            max=N[i];
        }
        
        if (N[i]<min)
        {
            minnum=i;
            min=N[i];
        }
    }
    
    printf("%d %d\n",max,maxnum);
    printf("%d %d\n",min,minnum);
    
    return 0;
}
