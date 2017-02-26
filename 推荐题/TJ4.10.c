#include <stdio.h>

int main()
{
  int time,mini,hour;

  scanf("%d %d",&time,&mini);

  hour=(time/100+(mini+time%100)/60);
  mini=(mini+time%100)%60;
  printf("%d:%d\n",hour,mini);

  return 0;
}
