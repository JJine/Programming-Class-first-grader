//p108b_gugudan
#include <stdio.h>
main()
{
	int i, dan;
	char ch;
	
	printf ("����� �������� => ");
	ch=getche();
	putchar('\n');
	
	printf("== %c��==\n", ch);
	dan=ch-'0'; //�ƽ�Ű �ڵ带 ���������� ��ȯ; 
	for(i=1; i<=9 ; i++)
		printf ("%d * %d = %2d\n", dan, i, dan*i);
}
