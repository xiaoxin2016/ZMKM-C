//
//  main.c
//  10.16
//
//  Created by Merck Liu on 2016/11/23.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100],c;
    
    gets(s);
    c=getchar();
    
    for (int i=0; i<strlen(s); i++)
    {
        if(s[i]==c)
        {
            for (int j=i; j<strlen(s); j++)
                s[j]=s[j+1];
            i--;
        }
    }
    
    puts(s);
    return 0;
}
