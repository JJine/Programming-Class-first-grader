//test3_1
#include<stdio.h>
main()
{
	int i, n, num, sum;
	char ch;
	
	do {
		system("cls");
		printf ("�Է� �ڷ��� ���� ���մϴ�\n");
		printf ("===============================\n");
		sum=0;
		printf ("�Է��� �ڷ��� ������ (2~9)=> ");
		do {
			num=getch()-'0';
			if(num>=2&&num<=9)
				printf ("%d", num);
		}while(num<2||num>9);
		printf ("\n----------------------\n");
		for(i=1;i<=num;i++)
		{
			printf ("%d => ", i);
			scanf ("%d", &n);
			sum=sum+n;
		}
			
		printf ("�հ� : %d", sum);
		printf ("\n=============================\n");
		printf ("\n�ٽ� �ϰڽ��ϱ�?(y/n)=> " );	
		ch=getche();
		}while(ch=='y'||ch=='Y');
	}
 
