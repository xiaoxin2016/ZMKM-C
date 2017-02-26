//
//  main.c
//  10.31
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char s[150]="",c;
    scanf("%s %c",s,&c);
    
    for (int i=strlen(s)-1; i>=0; i--)
    {
        if (c==s[i])
        {
            printf("%d\n",i+1);
            exit(0);
        }
        
    }
    
    printf("0\n");
    
    return 0;
}
