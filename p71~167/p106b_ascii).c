//ASCII code ���(p106b_ascii)
#include <stdio.h>
main()
{
	char a;
	
	printf ("���� = > ");
	a=getchar();
	while(a !=EOF)
	{
		getchar();
		printf("%c�� ASCII code : %d\n", a, a);
		printf ("���� = > ");
		a=getchar(); 
	} 
 } 
