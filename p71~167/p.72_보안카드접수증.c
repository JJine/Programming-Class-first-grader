//72.���� ī�� ������.c
#include <stdio.h>
main()
{
	char a[30];
	int b;
	char c;
	float d;
	
	printf ("�̸��� �Է��ϼ���: ");
	scanf ("%s", &a);
	printf ("���̸� �Է��ϼ���: ");
	scanf ("%d", &b);
	getchar();
	printf ("�μ��ڵ带 �Է��ϼ���: ");
	scanf ("%c", &c);
	printf ("����Ű�� �Է��ϼ���: ");
	scanf ("%f", &d);
	
	printf ("***************************\n");
	printf ("�̸�: %s\n",a);
	printf ("����: %d\n",b);
	printf ("�μ��ڵ�: %c\n",c);
	printf ("����Ű: %f\n",d);
	printf ("***************************\n");
	
 } 
