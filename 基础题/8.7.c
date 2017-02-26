//
//  main.c
//  8.7
//
//  Created by Merck Liu on 2016/11/5.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    int N[10];
    int max=0,flag=0;
    
    for (int i=0; i<10; i++)
    {
        scanf("%d",&N[i]);
        if (N[i]>max)
        {
            max=N[i];
            flag=i;
        }
        
    }
    
    for (int i=0; i<10; i++)
    {
        if (N[i]==max)
            printf("%d\n",i);
    }
    return 0;
}
