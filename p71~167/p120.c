//3.1��� �õ�
#include <stdio.h>
main()
{
	int n, i, num, max=0, min=100;
	
	printf("�л� ���� �Է��ϼ��� : ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++)
	{
		scanf("%d", &num);
		if(num>max)
			max=num;
		if(num<min)
			min=num;
	}
	printf ("1���� %d��, ������ %d��\n", max, min);
 } 
