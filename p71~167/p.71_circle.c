//p.71_circle.c
#include <stdio.h>
int main()
{
	int r;
	float l, s;
	float pie= 3.14;
	
	printf ("���� �������� �Է��Ͻÿ�. =>");	
	scanf ("%d",&r);
	printf ("-----------------------------\n");
	l = 2*pie*r;
	s = pie*r*r;
	printf ("���� �ѷ��� %7.2f�Դϴ�\n",l); 
	printf ("���� ���̴� %.2e�Դϴ�\n",s);
	printf ("============================\n");
	
	
}
