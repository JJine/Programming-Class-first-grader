//�ݺ���, ����, 1���� �迭 ��(p132_1test1)
//1. 30~100 ������ ���� 20���� �迭�� ����
//2. ���û� ����, ���(�Ҽ� ��°�ڸ�����)
//3., �ְ���, ������
//4. �հ���(60�� �̻�) �� ���հ���  

#include <stdio.h>
#include <time.h>
main()
{
	int i, score[20], sum, pno, no=0, max, min; 
	float avg; 
	
	srand(time(NULL));
	printf ("*********************************\n");
	printf ("* ��ǻ�� Ȱ��ɷ� �ڰݰ��� ��� *\n");
	printf ("*********************************\n");
	
	for (i=1;i<=20;i++)
	{
		score[i]=30+rand()%71;
	} 
	
	printf ("\n========== ������ ���� ==========\n");
	for (i=1;i<=20;i++) 
	{
		printf ("%2d => %d\n", i, score[i]);
		if (i%5==0)
		{
			printf ("---------------------------------\n");	
		}
		if (max<=score[i])
			max=score[i];
		if (min>score[i])
			min=score[i];
			
		sum=score[i]+sum;
		avg=(float)sum/20;
		
		if (score[i]>=60) 
		{
			pno=pno+1;
		}
		else
			no=no+1;
	}
	printf ("\n========== ������ ��� ==========\n");
	printf ("�� ��  : %2d�� \n�� ��  : %2.2f��",sum, avg);
	printf ("\n---------------------------------\n");
	printf ("�ְ��� : %2d�� \n������ : %2d��",max, min); 
	printf ("\n---------------------------------\n");
	printf ("��  �� : %2d�� \n���հ� : %2d��",pno, no);   
 }   
