//�ݺ��� �� (p115_test3)
//�Է� �ڷ��� �� ���ϱ�
#include<stdio.h>
main()
{
	int i, n, num, sum;
	char yes;
	
	
	do 
	{
		system("cls");
		num=0;
		sum=0;	
		printf ("�Է� �ڷ��� ���� ���մϴ�.\n");
		printf ("==============================\n");
		printf ("�Է��� �ڷ��� ������(2~9)=> ");
		n=getche()-'0'; 
		printf ("\n------------------------------\n");
		
		do  
		{	num=getch()-'0';
			if(num>=2&&num<=9)
			printf ("%d", num);
			for(i=1;i<=n;i++)
			{
			printf ("\n%2d => ", i);
			scanf ("%d", &num);
			sum=num+sum;
			}
		}while(num<1 || num>10);
		
	printf ("\n\n-----------------------------\n");
	printf ("�հ� : %d", sum);
	printf ("\n=============================\n");
	printf ("\n�ٽ� �ϰڽ��ϱ�?(y/n)=> " );	
	yes=getche();
	}while(yes=='y'||yes=='Y');
 } 
 
