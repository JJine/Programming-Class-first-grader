//2�б� 3�� 1ȸ ������(test2_3_1.c)
//1. 20���� ������ 40~100 ������ ������ �迭�� ����
//2. 3�� ����̸鼭 5�� ����� ���� ��� ���
//3. ������ ���(�Ҽ� ��°�ڸ�����)�� ���
//4, �ִ񰪰� �ּڰ��� ���
//5. Ȧ���� ¦���� ������ ���

#include <stdio.h>
#include <time.h>
#define NO 20
main()
{
	int i, a[NO], sum=0, max=0, min=100, odd=0, even=0, su;
	float avg=0;
	
	srand(time(NULL));
	printf("1. �߻��� ���� => ");
	for(i=1;i<=NO;i++)
	{
		a[i]=40+rand()%61;
		printf ("%d ,", a[i]);
	}
	printf("\n"); 
	
	for(i=1;i<=NO;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
		if(min>a[i])
		{
			min=a[i];
		}
		
		if(a[i]%3==0&&a[i]%5==0)
		{
			su=a[i];
		}
		if(a[i]%2==1)
		{
			odd++; 
		}
		if(a[i]%2==0)
		{
			even++;
		}
		sum=sum+a[i];
	}
		avg=(float)sum/20;
		printf ("2. 3�� 5�� ����� =>%d\n", su);
		printf ("3. ������ ��� : %d, %.2f\n", sum, avg);
		printf ("4. �ִ񰪰� �ּڰ� : %d, %d\n", max, min);
		printf ("5. Ȧ���� ¦���� ���� : %d, %d\n",odd, even); 
} 
