//1. ������ ��  
#include <stdio.h>
main()
{
	int a, b, temp=0, i;
	printf ("***�� �� ������ ���� ����ϱ�*\n");
	printf ("�� ���� �Է��ϼ��� :");
	scanf ("%d %d", &a, &b);
	
	if(a<b) 
	{
	for(i=a;i<=b;i++)
	{
		printf ("%d ", i);
	}
	printf ("\n");
	}
	
	if(a>b)
	{
	for(i=b;i<=a;i++)
	{
		printf ("%d ", i);
	}
	printf ("\n");
	}
}
