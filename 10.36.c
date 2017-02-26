//
//  main.c
//  10.36
//
//  Created by Merck Liu on 2016/11/26.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    char s[100],c[100];
    gets(s);
    gets(c);
    
    int i=0,j=0;
    
    while (s[i]!='\0'&&c[j]!='\0')
    {
        if (s[i]==c[j])
            j++;
        else
            j=0;
        i++;
    }
    
    if(c[j]=='\0')
        printf("%d\n",i-j);
    else
        printf("-1\n");
    
    return 0;
}
