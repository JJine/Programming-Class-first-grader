//p109_gugudan_3
#include <stdio.h>
main()
{
	int a,b,c; 
	printf ("����� ��������? ");
	
	scanf ("%d", &a);	
	if (a<=9 && a>0)
	
	for (b=1;b<=9;b++)
	{
		c=a*b;
		printf ("%d x %d = %d\n",a,b,c);	
	}	
	else if (a==0)
		printf ("�߸� �Է��Ͽ����ϴ�!!!!!!!!! �ϴ�� �Ѥ� �ϵ��� �� ");
	else 
	printf ("Error");
}
