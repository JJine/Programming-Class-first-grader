//���۰� ���� ASCII code ���(p106c_ascii)
#include <stdio.h>
main()
{
	char a;
	
	printf ("���� => ");
	a=getche();
	while (a != 13)
	{
		printf ("\n%c�� ASCII code : %d\n", a, a);
		printf ("=================================\n");
		printf ("���� => ");
		a=getche(); 
	}
 } 
