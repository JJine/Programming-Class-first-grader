//p100_calender
#include <stdio.h>
main()
{
	int a,b;
	printf ("������ ���� �Է��ϼ��� : ");
	scanf ("%d %d", &a, &b);
	printf ("%d�� %d ���� ������ ���� ", a,b);
	
	if (b==1||b==3||b==7||b==8||b==10||b==12)
		printf ("31��");
	else if (b==4||b==6||b==9||b==11) 
		printf ("30��");
	else
	{
		if(b==2||a % 400==0)
		printf("29��");
	else
		printf ("28��"); 
	 } 
	 printf("�Դϴ�\n");
 } 
