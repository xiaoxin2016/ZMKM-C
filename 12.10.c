//
//  main.c
//  12.10
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <string.h>
typedef struct a
{
    char name[21];
    int y;
    int p;
    int s;
    int mingci;
} thing;
int main()
{
    int n;
    scanf("%d",&n);
    thing a[n];
    for(int i=0 ; i<n ; i++)
        scanf("%s %d %d %d",&a[i].name,&a[i].y,&a[i].p,&a[i].s);
    for(int i=0 ; i<n ; i++)
        a[i].mingci=(a[i].y)*3+a[i].p;
    for(int i=0 ; i<n-1 ; i++)
        for(int j=1 ; j<n ; j++)
        {
            if(a[j].mingci>=a[j-1].mingci)
            {
                thing b=a[j];
                a[j]=a[j-1];
                a[j-1]=b;
            }
        }
    for(int i=0 ; i<n ; i++)
        printf("%d %s %d\n",i+1,a[i].name,a[i].mingci);
    return 0;
}
