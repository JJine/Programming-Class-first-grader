//�޿� ����(p_132_salary1) 
#include <stdio.h>
#define NO 20           //���ο� �� 
#define DAILY 80000		//�ϴ� 
#define FXTRA 15000		//�ʰ� �ñ� 
#define TAX 0.07		//����(7%) 
#define HEALTH 0.05		//�ǰ������(5%) 
#define PENSION 0.06    //���ο���(6%) 
#define FILED			//�׸� ��  
main()
{
	int n, i, p[NO][FILED];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
	{
		p[n][0]=15+rand()%11;
		p[n][1]=rnad()%26;
	}
	
	for(n=1;n<=no;n++)
	{
		p[n][2]=p[n][0]*DAILY;
		p[n][3]=p[n][1]*EXTRA;
		p[n][4]=p[n][2]+p[n][3];
		p[n][5]=p[n][3]*TAX;
		p[n][6]=p[n][4]*HEALTH;
		p[n][7]=p[n][4]*PENSION;
		p[n][8]=p[n][4]-p[n][5]-p[n][6]-p[n][7];
	}
	
	printf("9�� ���� ���� \n");
	printf("-------------------------\n");
	printf("��� �ٹ� �ʰ� �ӱ� �ʰ� �޿� ���� �ǰ� ���� ����\n");
	printf("��ȣ �ϼ� �ٹ� �Ѿ� ���� �հ� ���� ���� �ӱ� ���ɾ�\n");
	printf("------------------\n");
	
	for(n=1;n<NO;n++)
	{
		printf("%2d %2d %2d", n+1, p[n][0],p[n][1]);
		for(i=2;i<FILED;i++)
			printf(" %7d ". p[n][i]);
		printf("\n");
		if((n+1)%5==0)
		printf("-----------------------------------");
	 } 
} 
