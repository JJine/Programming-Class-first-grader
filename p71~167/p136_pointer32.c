//2���� �迭�� ������ Ȱ��(p136_pointer32)
#include <stdio.h>
#define NO 20 //�л� ��
#define SUB 7 //���� ��
main()
{
	int n, s, score[NO][SUB], sum[NO], sub_sum[SUB]={0,}, sub_max[SUB], sub_min[SUB];
	// �ε���     ���� 			����	���� ����	  ���� �ְ� 	���� ���� 
	float avg[NO], sub_avg[SUB];
	//     ���		���� ��� 
	
	srand(time(NULL));
	
	//���κ� ���
	for(n=0;n<NO;n++)
	{
		*(sum+n)=0;					//���κ� ���� �ʱ�ȭ 
		for(s=0;s<SUB;s++)
		{
			*(*(score+n)+s)=60+rand()%41;	//����(����) ���� score[n][s]=60+rand()%41;
			*(sum+n)+=*(*(score+n)+s);		//���κ� ���� sum[n]+=score[n][s];
		}
		*(avg+n)=(float)(*(sum+n))/SUB;		//���κ� ��� avg[n]=(float)sum[n]/SUB;
	 } 
	
	//���� ���
	for(s=0;s<SUB;s++)
	{
//		*(sub_sum+s)=* 
		*(sub_max+s)=0;
		*(sub_min+s)=100;
		*(sub_max+s)=*(*(score+0)+1);
		for(n=1;n<NO;n++)
		{
			*(sub_sum+s)+=*(*(score+n)+s);
			if(*(sub_max+s) < *(*(score+n)+s)) 
				*(sub_max+s)=*(*(score+n)+s);
			if(*(sub_min+s) > *(*(score+n)+s)) 
				*(sub_min+s)=*(*(score+n)+s);
		}
		*(sub_avg+s)=(float)(*(sub_sum+s))/NO;
	}
 
 	printf("=======================================================================\n");
 	printf("��ȣ      ����   ����   ����   ��ȸ   ����   ����   ����   ����   ���\n");
	printf("=======================================================================\n");
	
	for(n=0;n<NO;n++)
	{
		printf(" %2d  =>", n+1);
		for(s=0;s<SUB;s++)
			printf("   %3d ", *(*(score+n)+s));
			printf("   %3d    %.1f", *(sum+n), *(avg+n));
			printf("\n");
	 	if((n+1)%5==0)
	 		printf("-----------------------------------------------------------------------\n");
	 }
	 
	printf(" ����");
	for(s=0;s<SUB;s++)
	 	printf("  %4d ", *(sub_sum+s));
	printf("\n ���");
	for(s=0;s<SUB;s++)
		printf("  %.2f ", (*(sub_sum+s))/20.0); //sub[s]/20.0
	printf("  %.2f ", *(sub_avg+s));
	printf("\n=======================================================================\n");
	printf(" �ְ�");
	for(s=0;s<SUB;s++)
		printf(" %3d ", *(sub_max+s)); //sub_max[s]
	printf("\n ����");
	for(s=0;s<SUB;s++)
		printf(" %3d ", *(sub_min+s));	//sub_min[s]
	printf("\n=======================================================================\n");
} 
