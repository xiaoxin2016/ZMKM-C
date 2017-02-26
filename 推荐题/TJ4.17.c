//
//  main.c
//  tj4.17
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    //input
    float f;
    scanf("%f",&f);
    
    //cal
    float c;
    c=5*(f-32)/9;
    
    //output
    printf("%.2f\n",c);
    return 0;
}
