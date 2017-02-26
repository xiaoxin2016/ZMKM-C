//
//  main.c
//  10.21
//
//  Created by Merck Liu on 2016/11/25.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s1[200]="";
    char s2[200]="";
    
    gets(s1);
    gets(s2);
    
    for (int i=0; i<strlen(s1); i++)
        printf("%c",s1[i]);
    for (int i=0; i<strlen(s2); i++)
        printf("%c",s2[i]);
    
    putchar('\n');
    return 0;
}
