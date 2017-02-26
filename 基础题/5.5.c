//
//  main.c
//  5.5
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    if (n%2==0)
        printf("%d是偶数\n",n);
    else
        printf("%d是奇数\n",n);
    return 0;
}
