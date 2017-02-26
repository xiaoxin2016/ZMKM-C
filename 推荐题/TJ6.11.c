//
//  main.c
//  tj6.11
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//
#include <stdio.h>
#include <stdlib.h>

int main()

{
    char ch;
    int n,a=1,b,c;
    scanf("%c %d",&ch,&n);
    
    while(a<=n)
    {
        b=1;
        while(b<=n-a)
        {
            printf(" ");
            b++;
        }
        printf("%c",ch);
        
        c=1;
        
        if(a>=2)
        {
            while(c<=2*a-3)
            {
                printf(" ");
                c++;
            }
            printf("%c",ch);
        }
        
        ch=ch+1;
        printf("\n");
        a++;
    }
    
    a=1;
    ch=ch-2;
    
    while(a<=n-1)
    {
        b=1;
        while(b<=a)
        {
            printf(" ");
            b++;
        }
        printf("%c",ch);
        
        c=1;

        if(a<=n-2)
        {
            while(c<=2*n-2*a-3)
            {
                printf(" ");
                c++;
            }
            printf("%c",ch);
        }
        
        ch=ch-1;
        printf("\n");
    
        a++;
    }
    
    return 0;
    
}
