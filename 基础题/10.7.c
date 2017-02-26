//
//  main.c
//  10.7
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char s[50];
    gets(s);
    int i,h=1;
    for (i=0; i<strlen(s); i++)
    {
        if(isupper(s[i]))
        h+=(s[i]-'A'+1);     //一个递归的算法，求相加
    }
    
    if(h-1>100)
        printf("INVALID\n");
    else
        printf("%d\n",h-1);
    
    return 0;
}
