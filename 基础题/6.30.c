//
//  main.c
//  6.30
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int number,i,j,k,l;
    scanf("%d",&number);
    for (i=1; i*i<=number; i++)
    {
        if (number==i*i)
        {
            printf("%d=%d*%d\n",number,i,i);
            continue;
        }
        for (j=0; j<=i; j++)
        {
            if (number==i*i+j*j)
            {
                printf("%d=%d*%d+%d*%d\n",number,i,i,j,j);
                continue;
            }
            for (k=0; k<=j; k++)
            {
                if (number==i*i+j*j+k*k)
                {
                    printf("%d=%d*%d+%d*%d+%d*%d\n",number,i,i,j,j,k,k);
                    continue;
                }
                for (l=0; l<=k; l++)
                {
                    if (number==i*i+j*j+k*k+l*l)
                    {
                        printf("%d=%d*%d+%d*%d+%d*%d+%d*%d\n",number,i,i,j,j,k,k,l,l);
                    }

                }

            }
        }
    }
    return 0;
}
