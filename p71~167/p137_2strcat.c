//p137_2strcat
//string length

#include <stdio.h>
#include <string.h>
main()
{
	char st[20];
	char sr[20];
	printf("*** ���ڿ��� ���� ***\n\n");
	printf("���� => ");
		gets(st);
	printf("�߰� => ");
		gets(sr);
	printf("��ü => "); 
//	printf("%s", strcat(st,sr));
	printf("%s%s", st,sr);
	
	/*
	int i, pos;
	char st1, st2;
	
	printf("***���ڿ� ���� ***\n\n);
	printf("���� => ");
		gets(st1);
	printf("�߰� => ");
		gets(st2); 
	pos=strlen(st1);
	for(i=0;st[i]!=NULL;i++)
		st1[pos+i]=st2[i];
	st1[pos+i]=NULL;
	printf("��ü => %s", st1); 
	*/
}
