//
//  main.c
//  8.10
//
//  Created by Merck Liu on 2016/11/5.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    int n;
    scanf("%d",&n);
    
    int N[100];
    for (int i=1; i<=n; i++)
    {
        scanf("%d",&N[i]);
    }
    //以上是原始数据的采集
    
    //初始情况认为第一天到第三天情况最好；
    int sum;
    sum=N[3]-N[1];
    int flag;
    flag=1;
    
    int nowsum;
    
    for (int i=4; i<=n; i++)
    {
        nowsum=N[i]-N[i-2];
        sum=(nowsum>sum)?nowsum:sum;
        if (nowsum>=sum)
            flag=i-2;
    
    }
    
    printf("%d\n",flag);
    return 0;
}
