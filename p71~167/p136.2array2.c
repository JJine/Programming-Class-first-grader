//2������ 2���� �迭�� ����(p136.2array2.c)
#include <stdio.h>
#define NO 20
#define SUB 2
main()
{
	int n, score[NO][SUB];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
	{
		score[n][0]=50+rand()%51;
		score[n][1]=50+rand()%51;
	}
	
	printf("��ȣ ���� ���� \n");
	printf("-----------------\n");
	for(n=1;n<=NO;n++)
	printf("%2d => %3d %3d\n", n+1, score[n][0],score[n][1]);
}
