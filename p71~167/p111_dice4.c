//�ֻ��� ����-4(p111_dice4)
#include <stdio.h> 
main()
{
	int i, n;
	char yes;
	
	srand(time(NULL));
	system("color 47");
	do
	{
		system("cls");
		do 
		{
			printf("����� ������ �մϱ�?(2~9) => ");
			n=getche()-'0';
			putchar('\n');
			if(n<1||n>10)
				printf("�߸� �Է��Ͽ����ϴ�. \n\n"); 
		}
		while(n<1||n>10);
		
		printf("\n===================================");
		for(i=1;i<n;i++)
			{	
				printf("\n%d�� �ֻ����� ��������(�����̽��� �Է�): ", i);
				getch();
				printf(" %d\n", 1+rand()%6);
			}	
		printf("\n====================================");
		
		printf("\n�ٽ� �ϰڽ��ϱ�?(y/n) => ");
		yes=getche(); 
		putchar('\n');
	}while(yes=='y'||yes=='Y');
}
