//
//  main.c
//  tj10.04
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char s[10005],t[10005];
int i,j,la,lb,lc,ld,l,a[10005],b[10005],c[10005],d[10005];
void jian(int d[1005],int b[1005])
{
    int i;
    for (i=0;i<ld;i++)
    {
        if (d[i]<b[i])
        {
            d[i]+=10;
            d[i+1]--;
        }
        d[i]-=b[i];
    }
    while (d[ld-1]==0&&ld>1) ld--;
}
void cheng(int d[1005])
{
    int i,j;
    j=ld;
    for (i=ld-1;i>=0;i--)
    {
        if (d[i]==0) j--;
        d[i+1]=d[i];
    }
    d[0]=0;
    if (j) ld++;
}
int check(int d[1005],int b[1005])
{
    int i;
    if (ld<lb) return -1; else if (ld>lb) return 1;
    i=ld-1;
    while (d[i]==b[i]&&i>0) i--;
    if (i==0&&d[i]==b[i]) return 0;
    else return (d[i]-b[i]);
}
int main()
{
    gets(s);gets(t);
    if (strcmp(t,"1")==0) {printf("%s\n0\n",s);exit(0);}
    if (strcmp(s,"0")==0) {printf("0\n0\n");exit(0);}
    if (strcmp(s,t)==0) {printf("1\n0\n");exit(0);}
    la=strlen(s);lb=strlen(t);
    if (la<lb||la==lb&&strcmp(s,t)<0)
    {printf("0\n%s\n",s);exit(0);}
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    for (i=la-1;i>=0;i--) a[la-i-1]=s[i]-48;
    for (i=lb-1;i>=0;i--) b[lb-i-1]=t[i]-48;
    memset(c,0,sizeof(c));
    memset(d,0,sizeof(d));
    lc=la;ld=1;
    for (i=la-1;i>=0;i--)
    {
        cheng(d);
        d[0]=a[i];
        while (check(d,b)>=0)
        {
            jian(d,b);
            c[i]++;
        }
    }
    while (c[lc-1]==0) lc--;
    for (i=lc-1;i>=0;i--)
        printf("%d",c[i]);
    printf("\n");
    while (d[ld-1]==0&&ld>1) ld--;
    for (i=ld-1;i>=0;i--)
        printf("%d",d[i]);
    printf("\n");
    return 0;
}
