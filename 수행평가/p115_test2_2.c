//�ݺ��� ��(p115_test2_2) 
//���ڿ� ���� ��� ����
#include <stdio.h>
main()
{
	int i, n, num, big, small, etc;
	char ch;

	num=big=small=etc=0;
	
	
	system ("cls");
	printf ("���ڿ��� �Է��ϸ� �������� ������ ������ ����մϴ�.\n");
	printf ("====================================================\n");
	printf ("�Է� ���ڿ� =>" );
	n=getchar();
	
	

	ch=getche()-'0';
	while(ch!=13)
	{
		for(i=1;i<=n;i++);
		ch=getche();
		if(n=ch)
		num++;
		if(ch>=big)
		big++;
		if(ch<n)
		small=small+1;
		else
		etc++;
	
	}
	printf ("----------------------------------------------------\n");
	printf ("���� : %d, �빮�� : %d, �ҹ��� : %d, ��Ÿ : %d ", num, big, small, etc);
	printf ("\n====================================================\n");	
	printf ("�ٽ��ϰڽ��ϱ�? (y/n)=> ");
	
	
}
