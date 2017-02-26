//
//  main.c
//  12.9
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>
typedef struct a
{
    char name[21];
    char  pp[21];
    float  price;
    int x;
} thing;
int main()
{
    int n;
    scanf("%d",&n);
    thing a[n];
    for(int i=0 ; i<n ; i++)
        scanf("%s %s %f %d",&a[i].name,&a[i].pp,&a[i].price,&a[i].x);
    for(int i=0 ; i<n-1 ; i++)
        for(int j=1 ; j<n ; j++)
        {
            if(a[j].x>=a[j-1].x)
            {
                thing b=a[j];
                a[j]=a[j-1];
                a[j-1]=b;
            }
        }
    for(int i=0 ; i<n ; i++)
        printf("%s %s %.2f %d\n",a[i].name,a[i].pp,a[i].price,a[i].x);
    return 0;
}
