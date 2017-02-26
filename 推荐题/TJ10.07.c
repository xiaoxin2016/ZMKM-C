//
//  main.c
//  tj10.07
//
//  Created by Merck Liu on 2016/11/29.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int c[26]={0};
    while (n--)
    {
        char s[150];
        gets(s);
        for (int i=0; i<26; i++)
        {
            if(i==s[0]-'a')
                c[i]++;
        }
    }
    int count=0;
    for (int i=0; i<26; i++)
    {
        if(c[i]!=0)
            count++;
    }
    
    printf("%d\n",count);
    return 0;
}
