//
//  main.c
//  5.12
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // input
    int y,m;
    scanf("%d %d",&y,&m);
    
    //cal
    switch (m) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31\n");
            break;
            
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30\n");
            break;
            
            
        case 2:
            if((y%4==0&&y%100!=0)||(y%400==0))
                printf("29\n");
            else
                printf("28\n");
            break;
    }
    return 0;
}
