//1. ������ ��  
#include <stdio.h>
main()
{
	int a, b, temp, i;
	printf ("***�� �� ������ ���� ����ϱ�*\n");
	printf ("�� ���� �Է��ϼ��� :");
	scanf ("%d %d", &a, &b);
	
	if(a>b)
	{
		a=temp;
		a=b;
		b=temp;
	}
	for(i=a;i<=b;i++)
		printf ("%d ", i);
	printf ("\n");
	

}