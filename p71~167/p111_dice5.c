//p111_dice5
#include <stdio.h> 
main()
{
	int i, n, c, big, score;
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
			if(n<2||n>9){
				printf("�߸� �Է��Ͽ����ϴ�. \n\n");
			}
		}
		while(n<2||n>9);
		
		printf("\n===================================");
		printf("\n1�� �ֻ����� ��������(�����̽��� �Է�) : ");
		getch();
		c=1;
		big=1+rand()%6;
		printf("% d\n", big);
		for(i=2;i<=n;i++)
			{
				printf("\n%d�� �ֻ����� ��������(�����̽��� �Է�): ", score);
				getch();
				score=big;
				printf(" %d\n", i);
				if(score>big);
				{
				big=score;
				c=i;
				}
			}	
		printf("\n====================================");
		printf("\n���� ��ȣ : %d, ���� ���� : %d\n", c, big);
		printf("\n====================================");
		printf("\n�ٽ� �ϰڽ��ϱ�?(y/n) => ");
		yes=getche(); 
		putchar('\n');
	}while(yes=='y');
	
	
	
	
}
