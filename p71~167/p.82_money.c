//p.82_money.c
#include <stdio.h>
main()
{
	int m,b,r;
	printf ("å�� �����Ͻðڽ��ϱ�?"); 
	scanf ("%d",&b);
	
	if (m>=b){
		r=m-b;
		printf ("�����߽��ϴ�. ���� ���� %d�Դϴ�.",r );
	}
	else {
		printf ("�뵷�� �����մϴ�.");
		printf ("������ �ݾ��� : %d", r);
	}
	return 0;
}
