//p109_gugudan
#include <stdio.h>
main()
{
	int a,b,c; 
	printf ("����� ��������? ");
	
	scanf ("%d", &a);	
	
	for (b=1;b<=9;b++)
	{
		c=a*b;
		printf ("%d x %d = %d\n",a,b,c);	
	}	
}
