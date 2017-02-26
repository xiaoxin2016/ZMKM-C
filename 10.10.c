//
//  main.c
//  10.10
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100],ch;
    gets(s);
    ch=getchar();
    int count=0;
    
    for (int i=0; i<strlen(s); i++)
    {
        if (s[i]==ch)
        count++;
    }
    
    printf("%d\n",count);
        
    
    return 0;
}
