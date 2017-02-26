//
//  main.c
//  8.28
//
//  Copy from the textbook
//


#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    return *(int *)b - *(int *)a;
}

int main()
{
    int T,i,n,value[110],temp[110];
    scanf("%d",&T);
    while(T--)
    {
        scanf("%d",&n);
        for (i=0; i<n; i++)
        {
            scanf("%d",&value[i]);
            temp[i]=value[i];
        }
        qsort(temp, n, sizeof(int), cmp);
        for(i=0; i<n; i++)
        {
            if (temp[0] == value[i])
            {
                printf("%d ",i+1);
            }
        }
        printf("%d\n",temp[1]);
    }
    return 0;
}
