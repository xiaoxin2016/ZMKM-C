//
//  main.c
//  10.19
//
//  Created by Merck Liu on 2016/11/23.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>


int main(int argc, const char * argv[]) {
    char str[100];
    int i,n,m,len;
    gets(str);
    len=strlen(str);
    scanf("%d%d",&n,&m);
    for (i=n-1; i<len-m; i++)
    {
        str[i]=str[i+m];
    }
    str[i]='\0';
    puts(str);
    return 0;
}
