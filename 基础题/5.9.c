//
//  main.c
//  5.9
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    //input
    int x;
    scanf("%d",&x);
    
    //cal
    int g,s,b,q,w;
    w=x/10000;
    q=x/1000%10;
    b=x/100%10;
    s=x/10%10;
    g=x%10;
    
    //print
    if(x<0)
       printf("Invalid input\n");
    else {
    if(x<10)
    printf("1\n%d\n",g);
    else
    {
        if(x<100)
        printf("2\n%d%d\n",g,s);
        else
        {
            if(x<1000)
            printf("3\n%d%d%d\n",g,s,b);
            else
            {
                if (x<10000)
                printf ("4\n%d%d%d%d\n",g,s,b,q);
                else
                {
                    if(x<100000)
                    printf("5\n%d%d%d%d%d\n",g,s,b,q,w);
                    else
                    {
                        printf("Invalid input\n");
                    }
                }
            }
        }
    }
    }
    return 0;
}
