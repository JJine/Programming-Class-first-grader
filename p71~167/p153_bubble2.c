//함수 p153_bubble2

#include <stdio.h>
#define NO 10
void bubble(int *b, int n ) {
	int i, j, temp; //주함수 i, j와 다른 공간
	
	for(i=n-1;i>=0;i--)	
		for(j=0;j<i;j++) {
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
	printf("발생된 난수 => ");
	for(i=0;i<NO;i++) {
		s[i]=rand()%100;
		printf("%3d,", s[i]);
		}
	
	bubble(s, sizeof(s)/sizeof(int)); //sizeof(s) -> 40, sizeof(int) -> 4 결과는 결국 10이다. 
		//배열명(포인터), 배열의 요소 개수를 전달
	printf("\b \n정렬된 난수 => ");
	for(i=0;i<NO;i++)
		printf("%3d,", s[i]);
		printf("\b "); 
} 
