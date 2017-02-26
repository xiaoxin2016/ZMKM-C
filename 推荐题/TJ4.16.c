//
//  main.c
//  tj4.16
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //5jiaO,1jiao,5fen,2fen,yifen;
    //input
    int ys;
    scanf("%d",&ys);
    
    //cal
    int j5,j1,f5,f2,f1;
    j5=ys/50;
    j1=(ys-j5*50)/10;
    f5=(ys-j5*50-j1*10)/5;
    f2=(ys-j5*50-j1*10-f5*5)/2;
    f1=(ys-j5*50-j1*10-f5*5)%2;
    
    //output
    printf("%d\n%d\n%d\n%d\n%d\n",j5,j1,f5,f2,f1);
    
    return 0;
}
