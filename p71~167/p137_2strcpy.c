//p137_2strcpy
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
	printf("�纻 => ");
	strcpy(sr, st); //puts(st);
	printf("%s", sr);
}
/*

	int i;
	char st1[20],st2[20];
	
	printf("*** ���ڿ� ���� ***\n\n");
	printf("���� => ");
	gets(st1);
	for(i=0;st1[i]!=NULL;i++)
		st2[i]=st1[i];
	st2[i]='\0';
	printf("�纻 => "); 
	puts(st2); 
	*/
