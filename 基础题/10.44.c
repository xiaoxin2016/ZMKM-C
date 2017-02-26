//
//  main.c
//  10.44
//
//  Created by Merck Liu on 2016/11/27.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <string.h>

char mp[10][6]={"zero","one","two","three","four","five","six","seven","eight","nine"};

int value(char a[])
{
    int i;
    for (i=0; i<10; i++)
        if (strcmp(a,mp[i])==0)
            return i;
    
    return 0;
}


int main(int argc, const char * argv[]) {
    char a[10],b[10];
    int n,n1,n2;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s%s",a,b);
        n1=value(a);
        while (strcmp(b,"+")!=0)
        {
            n1=n1*10+value(b);
            scanf("%s",b);
        }
        
        scanf("%s%s",a,b);
        n2=value(a);
        while (strcmp(b,"=")!=0)
        {
            n2=n2*10+value(b);
            scanf("%s",b);
        }
        
        printf("%d\n",n1+n2);
        
    }
    return 0;
}
