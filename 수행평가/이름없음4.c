//�ݺ��� ��(p115_test2_teacher)
//���ڿ� ���� ��� ����
#include <stdio.h>
main()
{
	int i, n, num, big, small, etc;
	char ch, yes;
	
	do 
	{
	system ("cls");
	num=big=small=etc=0;	
	
	printf ("���ڿ��� �Է��ϸ� �������� ������ ������ ����մϴ�.\n");
	printf ("====================================================\n");
	printf ("�Է� ���ڿ� =>" );

		do
		{
			ch=getche();
			if(ch>='0' && ch<='9') 
			num++;
			else if(ch>= 'A' && ch<= 'Z') 
			big++;
			else if(ch>='a' && ch>='z')
			small++;
			else if(ch!=13)
			etc++;
		}while(ch!=13);
		
	printf ("\n----------------------------------------------------");
	printf ("\n���� : %d, �빮�� : %d, �ҹ��� : %d, ��Ÿ : %d ", num, big, small, etc);
	printf ("\n====================================================\n");	
	printf ("�ٽ��ϰڽ��ϱ�? (y/n)=> ");
	yes=getche();
	}while(yes=='y'||yes=='Y');
}
