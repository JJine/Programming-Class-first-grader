//�Լ� p153_select2

#include <stdio.h>
#define NO 10
void select(int *b, int n ) {
	int i, j, temp; //���Լ� i, j�� �ٸ� ����
	
	for(i=0;i<n-1;i++)	
		for(j=i+1;j<n;j++) {
			if(*(b+i) > *(b+j)) {
			temp = *(b+i);
			*(b+i) = *(b+j);
			*(b+j) = temp;	
			}
		}
}

void main() {
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("�߻��� ���� => ");
	for(i=0;i<NO;i++) {
		s[i]=rand()%100;
		printf("%3d,", s[i]);
		}
	
	select(s, sizeof(s)/sizeof(int)); //sizeof(s) -> 40, sizeof(int) -> 4 ����� �ᱹ 10�̴�. 
		//�迭��(������), �迭�� ��� ������ ����
	printf("\b \n���ĵ� ���� => ");
	for(i=0;i<NO;i++)
		printf("%3d,", s[i]);
		printf("\b "); 
} 
