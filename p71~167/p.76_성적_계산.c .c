//p.76_����_���.c 
#include <stdio.h>
main()
{
	float a,b,c;
	int  d,e,f;
	float s;
	
	printf ("***���� ���� ��� ���α׷�***\n");
	printf ("�߰���� �ݿ�����/���� ������ �Է��ϼ���: ");
	scanf ("%f %d", &a,&d);
	printf ("�⸻��� �ݿ�����/���� ������ �Է��ϼ���: ");
	scanf ("%f %d", &b,&e);
	printf ("������ �ݿ�����/���� ������ �Է��ϼ���: ");
	scanf ("%f %d", &c,&f);
	s=(a*d)+(b*e)+(c*f);
	printf ("������ %.1f �Դϴ�.\n", s);
}
