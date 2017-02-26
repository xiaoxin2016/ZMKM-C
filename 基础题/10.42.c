//
//  main.c
//  10.42
//
//  Created by Merck Liu on 2016/11/27.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    char s[50];
    int i,sum=0,k=1;
    
    scanf("%s",s);
    
    for (i=0; i<strlen(s)-2; i++)
    {
        if(s[i]!='-')
        {
            sum+=(s[i]-'0')*k;
            k++;
        }
    }
    
    int m=sum%11;
    
    if((s[12]-'0'==m)||(m==10&&s[12]=='X'))
        printf("Right\n");
    else
    {
        for (i=0; i<12; i++)
        {
            printf("%c",s[i]);
        }
        
        if(m<10)
            printf("%d\n",m);
        else
        printf("X\n");
    }
    return 0;
}
