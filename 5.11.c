//
//  main.c
//  5.11
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    char x;
    x=getchar();
    
    if(x>='0'&&x<='9')
        printf("figures\n");
    else
    {
        if(x>='a'&&x<='z')
        printf("small letters\n");
        else
        {
            if(x>='A'&&x<='Z')
            printf("capital letters\n");
            else
            {
                printf("others\n");
            }
        }
    }
    return 0;
}
