//#include <stdio.h>
////1. 40~100 ������ ������ 2���� �迭�� ����
////2. ���κ� => ����, ����, ���, ����(��� 10������ '*'ǥ��)
////3. ���� => ����, ���;
////4. ���� => �ְ����� 1�� ���б� ���� ����� ���� 
//#define NO 20 //�л���
//#define SUB 5 //������� 
//main()
//{
//	int n, i, star;  
//	int s[NO][SUB];	//���κ� ����  
//	int sum[NO]={0}; //���κ� ���� 
//	int s_sum[SUB]={0};  //���� ����  
//	int max[SUB], max_no[SUB]; //���� �ְ�����, �л���ȣ 
//	float avg[NO]; //���κ� ���
//	
//	srand(time(NULL));
//	for(n=0;n<NO;n++)
//	{
//		s=40+rand%100;
//	} 
//	
//	for(n=0;n<NO;n++)
//	{
//		
//	}
//	
//	printf("\n=========================================\n");
//	printf("��ȣ ���� ���� ���� ��ȸ ���� ���� ��� �����");
//	printf("-------------------------------------------------\n");
//	printf("�������� %d",s_sum[s]);
//	printf("������� %d", avg[s]);
//	printf("�� �� �� %d", ); 
//}
#include <stdio.h>
#include <time.h>
#define NO 20	//�л� �� 
#define SUB 5 //���� ��  
main()
{
	int n,s, score[NO][SUB], sum,  max[SUB]={0,}, max_no[SUB];//��, �� 
	float avg=0; 
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
	{
		for(s=0;s<SUB;s++)
			score[n][s]=40+rand()%60;
	}
	printf("-----------------------------------------------------------------\n");
	printf("  ��ȣ  ����   ����   ����   ��ȸ   ����    ����  ���    �������  \n");
	//���� 
	for(n=0;n<NO;n++)
	{
		sum=0;
		if(n%5==0) 
			printf("-----------------------------------------------------------------\n");
		printf("   %2d ", n+1);
	
		
		for(s=0;s<SUB;s++)
		{
			printf(" %4d  ",score[n][s]);
			sum=sum+score[n][s];
		}
		printf("  %4d",sum);
		avg=sum/5;
//		printf(" %6.2f",sum/7.0);
		printf(" %6.1f", avg);
		if(avg>=80||avg<50)
		printf("     ********");
		else if(avg>=70||avg<50)
		printf("     *******");
	else if(avg>=60||avg<40)
		printf("     ******");
		else if(avg>=50||avg<20)
		printf("     *****");
		printf(" \n"); 
	}
	
	printf("--------------------------------------------------------\n");
	printf("--------------------------------------\n");
	printf("  �������� : ");
	 //���� 
	for(s=0;s<SUB;s++)
	{	 
		max[s]=0;
		sum=0;
		for(n=0;n<NO;n++)
		{
			sum=sum+score[s][n];	
			score[s][1]=sum;
			
		}
	printf("%d ",sum); 
	}

	printf("\n  ������� : ");
	for(s=0;s<SUB;s++)
	{	 
		sum=0;
		for(n=0;n<NO;n++)
		{
		sum=sum+score[s][n];	
			score[s][1]=sum;
		}
	avg=sum/5.0; 
	printf("% 2.1f",avg); 
	} 
	printf("\n  �� �� �� : ");
	for(s=0;s<SUB;s++)
	{	 
		max[s]=0;
		sum=0;
		for(n=0;n<NO;n++)
		{
		sum=sum+score[s][n];	
			score[n][1]=sum;
			
		if(max[s]<score[n][s])
		max[s]=score[n][s];
		max_no[s]=n+1;
		}
	printf("%d ",max_no[s] ) ;
	}
	
//		printf(" 3��, 11�� 5��, 9��, 12��, 3��");	
}
