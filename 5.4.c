//
//  main.c
//  5.4
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // input
    int y;
    scanf("%d",&y);
    
    //cal
    if ((y%4 == 0 && y%100 != 0)||(y%400 == 0))
    {
        printf("%d是闰年\n",y);
    }
    else
    {
        printf("%d不是闰年\n",y);
    }
        
}
