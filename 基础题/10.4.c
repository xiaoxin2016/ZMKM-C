//
//  main.c
//  10.4
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[]) {
    char s[100];
    gets(s);
    
    int i,sum=0;
    for (i=0; i<strlen(s); i++)
    {
        if (s[i]>='0'&&s[i]<='9')
            sum=sum*10+(s[i]-'0');
    }
    printf("%d\n",sum);
    return 0;
}
