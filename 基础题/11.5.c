//
//  main.c
//  11.5
//
//  Created by Merck Liu on 2016/11/30.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define M 10
#define N 100


void Fun (char w[][N+5],int m,int n,char a[])
{
    int i,j,k;
    for (j=0,k=0; j<n; j++)
    {
        for (i=0; i<m; i++)
        {
            a[k++]=w[i][j];
        }
    }
    a[k]='\0';
}


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Hello, World!\n");
    return 0;
}
