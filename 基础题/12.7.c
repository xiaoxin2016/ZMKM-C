//
//  main.c
//  12.7
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define N 16



typedef struct
{
    char num[10];
    int s;
} STREC;
int fun(STREC s[],STREC h[],int low,int height)
{
    int a,b=0;
    for(a=0 ; a<N ; a++)
    {
        if(s[a].s>=low&&s[a].s<=height)
        {
            h[b++]=s[a];
        }
    }
    return b;
}

int main(int argc, const char * argv[])
{
    STREC s[N]={{"GA005",85},{"GA003",76},{"GA002",69},{"GA004",85},
        {"GA001",96},{"GA007",72},{"GA008",64},{"GA006",87},{"GA015",85},
        {"GA013",94},{"GA012",64},{"GA014",91},{"GA011",90},{"GA017",64},
        {"GA018",64},{"GA016",72}};
    STREC h[N];
    int i,n,low,height,t;
    scanf("%d%d",&low,&height);
    if(height<low)
    {
        t=height;
        height=low;
        low=t;
    }
    n=fun(s,h,low,height);
    printf("The student's data between %d--%d :\n",low,height);
    for(i=0 ; i<n ; i++)
        printf("%s %4d\n",h[i].num,h[i].s);
    return 0;
    }
