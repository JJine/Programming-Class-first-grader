//������ ���(p108c_gugudan)
#include <stdio.h>
main()
{
	int i, dan;
	char ch, yes;
	
	do
	{
		printf ("����� ��������? => ");
		ch=getche();
		putchar('\n');
		printf ("======%c��=======\n");
		dan=ch-'0';
		for (i=1;i<=9;i++)
			printf ("%d * %d = %2d\n", dan, i, dan*i);
		printf ("---------------\n");
		printf ("�ٽ� �ϰڽ��ϱ�? (Y/N) => ");
		yes=getch();
		putchar ('\n');
	}
	while(yes=='y'||yes=='Y');
}
