#include<stdio.h>
int main(){
  float x,y;
  void bigger(float a,float b);
  printf("������������\n");
  scanf("%f %f",&x,&y);
  bigger(x,y); 
  return 0;
}
void bigger(float a,float b)
{
  if (a>b||a==b)
    printf("the bigger is %f",a);
    else
    printf("the bigger is %f",b);
}
