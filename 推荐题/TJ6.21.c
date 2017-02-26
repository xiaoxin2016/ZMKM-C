//
//  main.c
//  tj6.21
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

/*
 4名专家对4款赛车进行评论。
 
 A说：2号赛车是最好的。
 B说：4号赛车是最好的。
 C说：3号不是最佳赛车。
 D说：B说错了。
 
 事实上只有一款赛车最佳，且只有一名专家说对了，其他3人都说错了。请编程输出最佳车的车号，以及哪位专家说对了。
 */



#include<stdio.h>
int main()
{
    int i,j,t;
    for(i=1;i<=4;i++)
    {
        t=(i==2)+(i==4)+(i!=3)+(i!=4);
        if(t==1)  //只有一个条件符合
            break;
    }
    printf("%d 号赛车是最佳赛车\n",i);
    if(i==2)printf("A说对了");
    if(i==4)printf("B说对了");
    if(i!=3)printf("C说对了");
    if(i!=4) printf("D专家说得对\n");
    return 0;
}
