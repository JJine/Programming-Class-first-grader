//p138_41linear2
#include <stdio.h>
#include <time.h>
#define NO 10
main()
{
	int s,a, i, j, n[NO], flag=0; //search - �˻� / i = �����ϴ� �� / n = ���� 
	
	srand(time(NULL));
	printf("�˻��� ���ڸ� ������ �Է��Ͻÿ� : ");
	s = getche() - '0';
	
	for(i=0;i<NO;i++)
	{
		n[i]=1+rand()%9;
	}
//	for(i=0;i<NO;i++)
//	{
//		if(a==n[i])
//		{
//			a=a+1;
//		}
//	}
//	if(a==0)
//	{
//		continue;
//	}
	printf("\n%d��(��) �迭��",s); 
	for(i=0;i<NO;i++)
		if(s==n[i])
		{
		
			printf(" %d ", i+1);
			flag=1;
		}	
		
	for(j=0;j<i;j++)
		if(n[i]==n[j])
		{
			printf(", %d", i+1);
			break;
		}
		printf("��°�� ��ġ�մϴ�."); 
	if(flag==0) 		
		printf("\n�Է��� �ڷᰡ �������� �ʽ��ϴ�.");
		printf("\n���� => ");
	for(i=0;i<NO;i++)
		printf("%2d ", n[i]); 
}

