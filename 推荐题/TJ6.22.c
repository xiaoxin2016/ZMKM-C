//
//  main.c
//  tj6.22
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include<stdio.h>
int main()
{
    int A,A1=0, B,B1=0, C,C1=0;
    for(A=0; A<3;A++)
        for(B=0; B<3;B++)
            for(C=0; C<3;C++)
            {
                A1 += B-A>0?1:0; A1+=(C==A?1:0);
                B1 += A-B>0?1:0; B1+=A-C>0?1:0;
                C1 += C-B>0?1:0; C1+=B-A>0?1:0;
                if((A-C)*(C1-A1)>0||(A-C==0&&C1-A1==0))
                    if((B-C)*(C1-B1)>0||(B-C==0&&C1-B1==0))
                        if((B-A)*(A1-B1)>0||(B-A==0&&A1-B1==0))
                        {
                            printf("A:%d\n",A+1);
                            printf("B:%d\n",B+1);
                            printf("C:%d\n",C+1);
                        }
                A1=0; B1=0; C1=0;
            }
    return 0;
}

