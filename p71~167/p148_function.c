#include <stdio.h>

int function(int a, int b) {
	if(a>b) return a;
	else return b;
}

void main()
{
	int a, b, big;
	scanf("%d %d", &a, &b);
	big=function(a, b);
	printf("�� ū���� %d�Դϴ�.", big);	
}
