//p153_Select3
#include <stdio.h>

void bubble(int *b, int n) {
	int i, j, temp; //주함수의 i, j와 다른 공간
		
	for(i=0;i<n-1;i++)
		for(j=i+1;j<n;j++)
		
		if(*(b+i)>*(b+j)) {
			temp=*(b+i);
			*(b+i)=*(b+j);
			*(b+j)=temp;
		} 	
}

#define NO 10

main() {
	int i, j, s[NO];
	
	srand(time(NULL));
	printf("발생한 난수 => ");
	for(i=0;i<NO;i++) {
		s[i]=1+rand()%100;
		printf("%3d", s[i]);
	}
	
	bubble(s,sizeof(s)/sizeof(int));
	printf("\b \n정렬된 난수 => ");
	for(i=0;i<NO;i++)
		printf("%3d", s[i]);
		printf("\b "); 
}
