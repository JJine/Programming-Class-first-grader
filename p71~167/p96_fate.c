//p96_fate
#include <stdio.h>
main()
{
	int y,m,d,r;
	printf ("����� ���ָ� ���帳�ϴ�.\n ����, ��, ���� ���ʴ�� �Է��ϼ���. : ");
	scanf ("%d %d %d", &y, &m, &d);
	r=y-m+d;
	if (r%10==0)
		printf ("����� ���ִ� ����Դϴ�\n");
	else
		printf ("����� ���ִ� �׷������Դϴ�\n");
}
