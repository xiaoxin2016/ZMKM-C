//
//  main.c
//  10.3
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main() {
    char s[100];
    gets(s);
    for (int i=0;s[i]!='\0';i++)
    {
        if (s[i]>='a'&&s[i]<='z')
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
    }
    puts(s);
}
