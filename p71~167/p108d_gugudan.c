//p108d_gugudan
#include <stdio.h>
main()
{
	int i, dan;
	char ch, yes;
	
	do 
	{
		system("cls");//clear screen, system("cls"�� ������ ������ putchar('\n') �������.
		do
		{
			  
			printf ("����� ��������(1~9) => ");
			ch=getche();  
			putchar('\n');
			if (ch<'1' || ch>'9')
				printf ("�߸� �Է��Ͽ����ϴ�. \n\n");
		}	
		while(ch<'1' || ch>'9');
		
		printf ("=====%c�� =====\n", ch);
		dan=ch-'0';
		for(i=1;i<=9;i++)
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("-----------\n");
		printf ("�ٽ� �ϰڽ��ϱ�? (y/n) => ");
		yes=getche();
		putchar('\n'); 
	}
	while(yes=='y'|| yes=='Y');
}
