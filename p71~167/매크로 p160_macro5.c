//��ũ�� p160_macro5.c
#include <stdio.h>
#define MAX(a,b) ((a>b) ? (a) : (b)) //x y  
#define ABS(a) ((a) < 0? -(a) : (a)) //x

main() {
	int a, b, c;
	
	printf("�� ���ڸ� �Է��Ͻÿ� => ");
	scanf("%d %d", &a, &b);
	printf("������ ���� ���ڸ� �Է��Ͻÿ� => ");
	scanf("%d", &c);
	printf("------------------------------------\n");
	printf("ū ���� %d�Դϴ�.\n", MAX(a,b));
	printf("%d�� ������ %d�Դϴ�.", c, ABS(c));
} 
