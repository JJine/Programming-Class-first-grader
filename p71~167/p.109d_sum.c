//p109d_sum
#include <stdio.h>
main()
{
	int i,sum;
	sum=0;
	
	for (i=1;i<=100;i++)
	{	
	sum=sum+i;
	printf ("i => %4d sum => %d\n", i,sum); //�� �տ����� �ڿ� ��������ϴ°� i=> ����%d ����   
	/*i => %3d 3ĭ�� ��Ƽ�
	�����ض�� �ǹ�*/ 
 	}
 	printf ("loop�� ��� ���� i�� : %d",i); 
}
