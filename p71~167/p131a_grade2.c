//p131a_grade2
#include <stdio.h>
#include <time.h>
main()
{
	int i,score[20], a,b,c,d,e;
	
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
		switch(score[i]/10) 
		{
			case 10 :
			case 9 : a++;
					 break;
			case 8 : b++;
					 break;
			case 7 : c++;
				     break;
			case 6 : d++;
				     break;
			default : e++;		
		}
	}
	printf ("\n==== ���ú� ����� == \n");
	printf ("A��� : %2d, B��� : %2d, C��� : %2d, D��� : %2d, E��� : %2d", a,b,c,d,e);
	
	
}
