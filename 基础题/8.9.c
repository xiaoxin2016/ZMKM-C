//copy from the text

#include <stdio.h>
#define N 50

int main()
{
    int h[N+5],n,i,count=0,sum=0;
    scanf("%d",&n);
    
    for (i=0; i<n; i++)
    {
        scanf("%d",&h[i]);
        sum+=h[i];
    }
    
    sum/=n;
    
    for (i=0; i<n; i++)
    {
        if(h[i]>sum)
            count+=h[i]-sum;
    }
    
    printf("The minimum number of moves is %d.\n",count);
}
