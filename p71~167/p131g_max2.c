//p131g_max2.c
#include <stdio.h>
#include <time.h>
main()
{
	int a,b[20], max, max_person;
	
	srand(time(NULL));	
	for (a=1;a<=20;a++)
	{
		b[a]=1+rand()%100;
	}
	
	printf ("==== ���� ��� ====\n");

	for(a=1;a<=20;a++) 
	{
		printf ("%2d�� ���� => %2d\n", a, b[a]);
		if (max<=b[a]) 
		{
			max=b[a];
			max_person=a;
		}
			
	}
		

	printf ("====�ְ� ������====\n");
	printf ("��ȣ : %d, ���� : %d��",max_person,max);
}
