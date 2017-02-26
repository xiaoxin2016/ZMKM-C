//
//  main.c
//  tj6.16
//
//  Created by Merck Liu on 2016/11/2.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    
    int graphic[100][100];//存储图形的点
    int i=0,j=0,rightEst,bottumEst;//求出右下角的点
    int width=0,lengh=0;
    
    for(i=0;i<num;i++)
    {
        for(j=0;j<num;j++)
        {
            scanf("%d",&graphic[i][j]);
            if(graphic[i][j]==0){
                rightEst=i;bottumEst=j;//求出右下角的点
            }
        }
    }
    
    for(i=rightEst,j=bottumEst;i;i--){//求出宽
        if(graphic[i][j]==0) width++;
        else break;
    }
    for(i=rightEst,j=bottumEst;j;j--){//求出长
        if(graphic[i][j]==0) lengh++;
        else break;
    }
    int portation=width*lengh-width*2-(lengh-2)*2;//求出面积减边上的点
    
    printf("%d\n",portation);
    
    return 0;
}
