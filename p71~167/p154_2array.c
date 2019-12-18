//2���� �迭�� �Լ� - 5������ ���� ��� ���ϱ� p154_2array
#include <stdio.h>
#define NO 20
#define SUB 1

void total(int(*s)[SUB], int *t) {
	int no, subject;
	
	for(no=0;no<NO;no++) 
		for(subject=0;subject<SUB;subject++)
			t[no]+=s[no][subject];		
}


void rank(int *t, int *r) {
	int i,j;
	
	for(i=0;i<NO;i++) 
		*(r+i)=1;
	for(i=0;i<NO-1;i++)
		for(j=i+1;j<NO;j++)
			if(*(t+i)>*(t+j))	
				(*(r+j))++;
			else(*(r+i))++;
}
main() { 
	int n,s, score[NO][SUB], tot[NO]={0}, rnk[NO];
	float avg[NO];
	
	srand(time(NULL));
	for(n=0;n<NO;n++)
		for(s=0;s<SUB;s++)
			score[n][s]=50+rand()%51;
//	total(score, tot); //score ������(��� ���� ���� ������ �������� �ذ��ϱ� ���� �Լ��� ���), tot 1���� �迭 
	rank(score, rnk);
	for(n=0;n<NO;n++) {
		printf("  %2d��=> ", n+1);
		for(s=0;s<SUB;s++) 
			printf("  %3d��: ", score[n][s]);
			printf("%2d��\n", rnk[n]);
			if((n+1)%5==0)
				printf("--------------------------------------------------\n");
	}
}


