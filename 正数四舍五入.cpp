#include<stdio.h>
int main()
{
	float a;
	printf("������һ��С��\n");
	scanf("%f",&a);
	int b,x;
	b=a;
	x=(a-b)*10;
	if (x>=0 and x<5)
	  printf("��������Ϊ��%d",b);
	  else printf("��������Ϊ��%d",b+1);
	  return 0;
}

