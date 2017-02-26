//
//  main.c
//  tj7.01
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

void CountStars(char stars[][N],int w,int *p)
{
    int count=0,i=0,j=0;
    for(i=0 ; i<w ; i++)
        for(j=0 ; stars[i][j]!='\0' ; j++)
        {
            if(stars[i][j]=='*')
                count++;
        }
    *p=count;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
