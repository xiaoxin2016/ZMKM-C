#include <stdio.h>

int main(){
    int in,out,pos;
    out = pos = 0;//init
    scanf("%d",&in);
    while(in > 0){
        int flag = ((in%10)&1)^(pos&1);
        
        //根据数字奇偶 和 数位奇偶是否一致取值 .
        //由于pos从0开始算因此用异或, 恰好实现奇相同奇偶性得到1的规则
        
        out += flag<<pos;//左移位数转成10进制  注意不是右移
        pos++;
        in /= 10;
    }
    printf("%d\n",out);
    return 0;
}
