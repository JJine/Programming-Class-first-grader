//p137_5strcmp.c

#include <stdio.h>
#include <string.h>
main()
{
	int i ,pos, p1,p2,cmp;
	char st[20], st2[20];
	
	printf("***������ ��  ***\n");
	printf("���ڿ� 1=> ");
	gets(st);
	printf("���ڿ� 2=> ");
	gets(st2);
	
	strcmp(st, st2);
	pos=strcmp(st, st2);
	
	if(pos==0)
		printf("�� ���ڿ��� �����մϴ�.");
		
//		
//	printf("***������ ��  ***\n");
//	printf("���ڿ� 1=> ");
//	gets(st);
//	printf("���ڿ� 2=> ");
//	gets(st2);
//	
//	p1=strlen(st); p2=strlen(st2);
//	if(p1==p2) {
//		for(i=0;st[i]!=NULL;i++)
//		{
//			cmp=st[i]-st[i];
//			if(cmp!=0) break;
//		}
//		if(cmp==0) printf("\n�� ���ڿ��� �����մϴ�.\n");
//		else if(cmp>0) printf("\nù ��° ���ڿ��� �� Ů�ϴ�.\n");
//		else printf("\n�� ��° ���ڿ��� �� Ů�ϴ�.\n");
//	}
//	else if(p1>p2) printf("\nù ��° ���ڿ��� �� Ů�ϴ�.\n");
//	else printf("\n�� ��° ���ڿ��� �� Ů�ϴ�.\n");
}

