//p131a_grade1
#include <stdio.h>
#include <time.h>
main()
{
	int i,score[20], pass=0, nopass=0, a,b,c,d,e;
	
	a=b=c=d=e=0;
	srand(time(NULL));	
	for (i=1;i<=20;i++)
	{
		score[i]=1+rand()%100;
	}
	
	printf ("==== ���� ��� ====\n");

	for(i=1;i<=20;i++) 
	{
		printf ("%2d�� ���� => %2d\n", i, score[i]);
		
		if(score[i]>=90)
			a++;
		else if (score[i] >=80)
			b++;
		else if (score[i] >=70)
			c++;
		else if (score[i] >=60)
			d++;
		else 
			e++; 
	}
	printf ("\n==== ���ú� ����� == \n");
	printf ("A��� : %d, B��� : %d, C��� : %d, D��� : %d, E��� : %d", a,b,c,d,e);

}
