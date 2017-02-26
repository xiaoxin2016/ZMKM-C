//
//  main.c
//  10.24
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, const char * argv[]) {
    char s[200];
    char t[200];
    gets(s);
    gets(t);
    
    if (strcmp(s,t)>0)
        printf("s>t\n");
    else if(strcmp(s,t)<0)
        printf("s<t\n");
    else
        printf("s=t\n");

    return 0;
}
