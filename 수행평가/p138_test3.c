#include <stdio.h>
#include <string.h>
#define NO 10
main() {
	int i, j, n; 
	char ch, st[NO][11], temp[11];
	
	printf("\n�Է��� ���ڿ��� ������(2~9) => ");
	do {
		ch=getch();
	}while(ch<'2'||ch>'9');
	putchar(ch);
	n=ch-'0';
	
	printf("\n\n=== ���ڿ� �Է� ===\n");
	for(i=0;i<n;i++) {
		printf("string %d => ", i+1);
		gets(st[i]);
	}	
	
	for(i=n-1;i>=0;i--)
		for(j=0;j<i;j++) 
			if(strcmp(st[j], st[j+1]) >0) {
				strcpy(temp, st[j]);
				strcpy(st[j], st[j+1]);
				strcpy(st[j+1], temp);
			}
	printf("\n=== ���ĵ� ���ڿ� ===\n");
	for(i=0;i<n;i++)
		printf("%s, ", st[i]);
		printf("\b\b ");		
}


