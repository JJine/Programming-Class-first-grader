//���ϴ� ���� ã��(p131e_research1)
#include <stdio.h>
#include <time.h>
main()
{
	int a,b[20], c, d=0, e;
	
	srand(time(NULL));	
	

	for (a=1;a<=20;a++)
	{
		b[a]=1+rand()%100;
	}   
		printf ("����� ���ϴ� ������ => ");
		scanf ("%d", &c); 
	
	printf ("==== ���� ��� ====\n");
	
	for(a=1;a<=20;a++) 
	{
		printf ("%2d�� ���� => %2d\n", a, b[a]);	
		if (c==b[a])
		{	e=a;
			d=1;
		}
	}
	printf ("==== �˻� ��� ��� ====\n");
	if(d==1)
		printf ("����� ���ϴ� ������ %d��°���� ã�ҽ��ϴ�.", e );
	else
		printf ("��ã�ҽ��ϴ�.");
}	
