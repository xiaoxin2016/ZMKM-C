//
//  main.c
//  5.6
//
//  Created by Merck Liu on 2016/10/13.
//  Copyright © 2016年 Merck Liu. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {

    //F=(C×9/5)+32
    
    //input
    float lx,sz;
    scanf("%f %f",&lx,&sz);
    
    //cal
    float c,f;
    c=(sz-32)*5/9;
    f=(sz*9/5)+32;
    
    //judge
   if (lx==2)
   {
       printf("The Fahrenheit is %.2f\n",f);
       
       }
    else
    {
        printf("The Centigrade is %.2f\n",c);
    }
    
    return 0;
}
