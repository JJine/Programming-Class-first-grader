//p131a_pass
#include <stdio.h>
#include <time.h>
main()
{
	int a,b[20], c=0, d=0;
	
	srand(time(NULL));	
	for (a=1;a<=20;a++)
	{
		b[a]=1+rand()%100;
	}
	
	printf ("==== ���� ��� ====\n");

	for(a=1;a<=20;a++) 
	{
		printf ("%2d�� ���� => %2d\n", a, b[a]);
		
		if(b[a]>=70)
		{
			c=c+1;
		}
		else 
			d=d+1;
	}
	printf ("�հ��ڴ� %d���̰�, ���հ��� %d���Դϴ�.", c, d);
}
