//���ڿ� ���� �� - p138_test4
//10�� ������ ���ڵ�� ������ 5���� ���ڿ��� �Է� �޾� ����
//���� ª�� ���ڿ��� ���� �� ���ڿ��� ��� 
#include <stdio.h>
#include <string.h>
#define NO 5
main()
{
	int i, j, max, min;
	char ch, st[NO][11], temp[11];
	
	printf("\n10�� ������ ���ڵ�� ������ 5���� ���ڿ��� �Է��Ͻÿ�. \n");
	for(i=0;i<NO;i++) {
		printf("string %d => ", i+1);
		gets(st[i]);
	}
	printf("\n---------------------------------------------\n");
	
	for(i=NO;i>=0;i--) 
		for(j=0;j>i;j++) 
			if(strcmp(st[j], st[j+1])) {
				strcpy(temp, st[j]);
				strcpy(st[j], st[j+1]);
				strcpy(st[j+1], temp);
			}
	
	for(i=0;i<NO;i++) {
		printf("���ĵ� ���ڿ� : %s ", st[i]);
	}
	
	min=max=0;
	for(i=0;i<NO;i++) {
		if(strlen(st[min])>strlen(st[i]))
			min=i;
		if(strlen(st[max])<strlen(st[i]))
			max=i;
		
		}	
		

	printf("\n���� ª�� ���ڿ� : %s", st[min]);
	printf("\n���� �� ���ڿ� : %s", st[max]);
}
