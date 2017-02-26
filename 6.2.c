//
//  main.c
//  6.2
//
//  Created by Merck Liu on 2016/10/18.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    //input
    int n;
    scanf("%d",&n);
    
    //cal
    int i;
    double i1,sum;
    sum=0;
    
    for(i=1;i<=n;i++)
    {
        i1=(pow(-1,i+1))*(1/(double)i);
        sum+=i1;
    }
    
    //output
    printf("sum=%.4f\n",sum);
    
    return 0;
}
