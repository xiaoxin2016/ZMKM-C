//
//  main.c
//  10.6
//
//  Created by Merck Liu on 2016/11/22.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int con(char s[])
{
    int i,h=1;
    for (i=0; i<strlen(s); i++)
    {
        h=((s[i]-'A'+1)*h)%47;     //一个递归的算法，求相乘
    }
    return h;
}


int main(int argc, const char * argv[]) {
    char a[15],b[15];
    gets(a);
    gets(b);
    if(con(a)==con(b))
        printf("GO\n");
    else
        printf("STAY\n");
    return 0;
}
