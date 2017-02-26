//
//  main.c
//  tj8.07
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int change(int n,int m)
{
    int num=0,e=1;
    while(n!=0)
    {
        if(n%10>=m)
            return -1;
        num=num+(n%10)*e;
        e*=m;
        n/=10;
    }
    return num;
}
int main()
{
    int a=0,b=0,i,j,len;
    char a1[10],b1[10];
    scanf("%s %s",a1,b1);
    len=strlen(a1);
    for(i=0 ; a1[i]!='\0' ; i++)
    {
        if(isdigit(a1[i]))
        {
            int e=1;
            for(int j=0 ; j<len-i-1 ; j++)
                e*=10;
            a+=e*(a1[i]-'0');
        }
        else
        {
            int e=1;
            for(int j=0 ; j<len-i-1 ; j++)
                e*=10;
            a+=e*(a1[i]-'A'+10);
        }
    }
    len=strlen(b1);
    for(i=0 ; b1[i]!='\0' ; i++)
    {
        if(isdigit(b1[i]))
        {
            int e=1;
            for(int j=0 ; j<len-i-1 ; j++)
                e*=10;
            b+=e*(b1[i]-'0');
        }
        else
        {
            int e=1;
            for(int j=0 ; j<len-i-1 ; j++)
                e*=10;
            b+=e*(b1[i]-'A'+10);
        }
    }
    for(i=2 ; i<37 ; i++)
        for(j=2 ; j<37 ; j++)
        {
            int x=change(a,i),y=change(b,j);
            if(x==y&&x!=-1)
            {
                if(strcmp(b1,"A")==0)
                {
                    printf("10 (base 10) = A (base 11)\n");
                    return 0;
                }
                printf("%s (base %d) = %s (base %d)\n",a1,i,b1,j);
                return 0;
            }
        }
    
    if(i==37||j==37)
        printf("%s is not equal to %s in any base 2..36\n",a1,b1);
    return 0;
}
