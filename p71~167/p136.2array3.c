//2������ 2���� �迭�� ����(p136.2array3.c)
#include <stdio.h>
#define NO 20	//�л� �� 
#define SUB 7 //���� ��  
main()
{
	int n,s, score[NO][SUB]; //��, ��  
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
	{
		for(s=0;s<SUB;s++)
			score[n][s]=60+rand()%41;
	}
	printf("��------------------------------------------��\n");
	printf("�� ��ȣ  ���� ���� ���� ��ȸ ���� ���� ���� ��\n");
	printf("�� -----------------------------------------��\n");
	for(n=0;n<NO;n++)
	{
		printf("�� %2d =>", n+1);
		for(s=0;s<SUB;s++)
			printf("%4d ",score[n][s]);
			printf(" ��\n"); 
	}
	printf("�� -----------------------------------------��\n"); 
}
