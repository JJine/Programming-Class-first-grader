//�ֻ��� ����-1(p111_dice1)
#include <stdio.h>
#include <time.h>
main()
{
	int i, n;
	
	srand (time(NULL));
	printf ("����� ������ �մϱ�?(2~9) => ");
	n=getche()-'0';
	putchar('\n');
	for(i=1;i<=n;i++)
		printf(" %2d�� => %d\n", i, 1+rand()%6); 
} 