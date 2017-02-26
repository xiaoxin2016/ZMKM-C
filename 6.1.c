//
//  main.c
//  6.1
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    int n;
    scanf("%d",&n);
    
    //cal
    int s,i;
    s=0;
    for(i=1;i<=n;i++)
    {
        s+=i;
    }
    
    //output
    printf("%d\n",s);
    
    return 0;
}
