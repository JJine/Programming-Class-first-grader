//p137_4stratioi

#include <stdio.h>
#include <string.h>
main() 
{
	int i, st2;
	char st[20];
	
	printf("** ������ ���ڿ� ���� ��ȯ ***\n");
	printf("������ ���ڿ� => ");
	gets(st);
	printf("���� => ");
	st2=atoi(st);
	printf("%d\n", st2);	
	
	/*
	int i, num=0;
	char st[20];
	
	printf("** ������ ���ڿ� ���� ��ȯ ***\n");
	printf("������ ���ڿ� => ");
	gets(st);
	
	for(i=0;st[i]>='0'&&st[i]<='9';i++)
		num=num*10+(st[i]-'0');
	printf("���� => %d ", num);
	*/	
}
