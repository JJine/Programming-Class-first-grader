//���۰� ���� ASCII code ���()
#include <stdio.h>
main()
{
	char ch;
	
	printf ("���� = > ");
	ch=getch();
	while (ch != 13)
	{
		printf ("\n%c�� ASCII code : %d\n", ch, ch);
		printf ("=======================\n");
		printf ("���� = > ");
		ch=getche();
	}
 } 
