#include<stdio.h>
int main(){
	float x,y;
	float jugement(float a,float b);
	printf("������������\n");
	scanf("%f %f",&x,&y);
	jugement(x,y);
	return 0;
}
void jugement(float a,float b)
{
	if (a==b)
	  printf("�������\n");
	  else
	    printf("���������\n"); 
}
