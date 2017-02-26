//
//  main.c
//  tj11.4
//
//  Created by Merck Liu on 2016/12/6.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define N 80


#include <string.h>
void Fun(int *a, int p, int n)
{
    int b[N];
    int i,j;
    for (i=p+1,j=0; i<n; i++,j++)
    {
        b[j]=a[i];
        
    }
    
    for (i=1; j<n; i++,j++)
    {
        b[j]=a[i]-1;
        
    }
    
    memcpy(a,b,sizeof(int)*n);

}


int main(  )
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
    int i, p, n = 15;
    scanf("%d", &p);
    Fun(a, p, n);
    for(i = 0; i < n; i++)
        printf("%3d", a[i]);
    printf("\n");
    return 0;
}
