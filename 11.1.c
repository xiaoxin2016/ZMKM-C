//
//  main.c
//  11.1
//
//  Created by Merck Liu on 2016/11/21.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>
#define N 1000

void Fun(int a[], int n, int *odd, int *even)
{
    for (int i=0; i<n; i++)
    {
        if(a[i]%2!=0)
            *odd+=a[i];
        else
            *even+=a[i];
    }
}

int main()
{
    int a[N + 5], i, n, odd, even;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    Fun(a, n, &odd, &even);
    printf("The sum of odd numbers:%d\n", odd);
    printf("The sum of even numbers:%d\n", even);
    return 0;
}
