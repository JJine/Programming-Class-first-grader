//�ֻ��� ����-2.5(p111_dice2.5)
#include <stdio.h> 
main()
{
	int i, n;
	char yes;
	
	srand(time(NULL));
	
	do{
		system("cls");
		printf ("����� ������ �մϱ�?(2~9) => ");
		n=getche()-'0';
		
		printf ("\n================================");
		for(i=1;i<=n;i++) 
		{
			printf ("\n%d�� �ֻ����� ��������(�����̽��� �Է�):", i);
			getch(); //�����̽��ٸ� ��ٸ� 
			printf(" %d\n", 1+rand()%6);	
		}
		printf("\n�ٽ� �ϰڽ��ϱ�?(y/n) => ");
		yes=getche();
		putchar('\n');	
		}
		while(yes=='y');
 } 
