//
//  main.c
//  10.12
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    int count=0;
    char s[1000];
    
    while (1)
    {
        scanf("%s",s);
        if(strcmp(s,"stop")==0)
            break;
        count++;
    }
    
    printf("%d\n",count);
    return 0;
}
