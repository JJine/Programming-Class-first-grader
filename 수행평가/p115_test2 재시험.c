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
	n=getche();
	
	

	ch=getche();
	while(ch!=13)
	{
		for(i=1;i<=n;i++);
		ch=getche();
		if(n>1)
		ch=num;
		if(ch=='A'||ch=='Z')
		big=ch;
		if(ch=='a'||ch=='z')
		small=ch;
		
	}
	printf ("----------------------------------------------------\n");
	printf ("���� : %d, �빮�� : %d, �ҹ��� : %d, ��Ÿ : %d ", num, big, small, etc);
	printf ("\n====================================================\n");	
	printf ("�ٽ��ϰڽ��ϱ�? (y/n)=> ");	
}
