//2.���� ū ���
#include <stdio.h>
main()
{
	int i, w, h, max=0;
	
	printf("��� 3���� ����, ������ ���̸� ���ʷ� �Է��ϼ���. \n");
	
	for(i=1;i<=3;i++)
	{
		scanf("%d %d", &w, &h);
		if(max<w*h)
			max=w*h;
	}
	printf("���� ū ����� ���̴� %d�Դϴ�.\n", max);
 } 