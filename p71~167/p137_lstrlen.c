//p137_lstrlen
//string length

#include <stdio.h>
main()
{
	int i=0;
	char st[20];
	
	printf("*** ���ڿ��� ���� ***\n\n");
		printf("���ڿ� => ");
	gets(st);
	i=strlen(st); //while(st[i]!=NUll) i++
	printf("���ڿ��� ���� => %d ����", i); 
}
