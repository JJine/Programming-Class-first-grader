//1~9 ������ ���� 10���� �߻����� �迭�� ������ ��, �Է��� ���ڸ� �˻��Ͽ� �迭������ ��ġ�� ����Ͻÿ�. (p138_41linear1.c)
#include <stdio.h>
#include <time.h>
#define NO 10
main()
{
	int s, i, n[NO], flag=0; //search - �˻� / i = �����ϴ� �� / n = ���� 
	
	srand(time(NULL));
	printf("�˻��� ���ڸ� ������ �Է��Ͻÿ� : ");
	s = getche() - '0';
	
	for(i=0;i<NO;i++)
	{
		n[i]=1+rand()%9;
	}
	
	for(i=0;i<NO;i++)
		if(s==n[i])
		{
			printf("\n%d��(��) �迭�� %d��°�� ��ġ�մϴ�.", s, i+1);
			flag=1;
			break;
		}
		if(flag==0) 		
			printf("\n�Է��� �ڷᰡ �������� �ʽ��ϴ�.");
			printf("\n���� => ");
	for(i=0;i<NO;i++)
		printf("%2d ", n[i]); 
}

