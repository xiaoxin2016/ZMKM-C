//
//  main.c
//  10.18
//
//  Created by Merck Liu on 2016/11/23.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//


#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s1[100],s2[100]="";
    int count=0,i,j;
    
    gets(s1);
    s2[count++]=s1[0];
    
    for (i=1; i<strlen(s1); i++)
    {
        for (j=0; j<count; j++)
            if(s1[i]==s2[j])
                break;
        if(j==count)
            s2[count++]=s1[i];
    }
    
    s2[count]='\0';
    puts(s2);
    return 0;
}
