//
//  main.c
//  6.9
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int t,s=0;
    for(t=1;t<=n;t++)
    {
 
        
        if((t%7!=0)&&(t/10!=7)&&(t%10!=7))
        s+=pow(t,2);
        
    }
    
    printf("%d\n",s);
    
    return 0;
}
