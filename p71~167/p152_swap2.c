//��ȯ(p152_swap2)
#include <stdio.h>

 	swap (int *x, int *y) {
	int temp;
	temp = *x; //* = ���� ������ 
	*x=*y;
	*y=temp;
} 

main() {
	int *a, *b;
	
	printf("ù ��° �� a�� �Է��Ͻÿ� => ");
	scanf("%d", &a);
	printf("�� ��° �� b�� �Է��Ͻÿ� => ");
	scanf("%d", &b);
	swap(&a, &b); //�ּҿ� ���� ����(call by value) 
	printf("���� ��ȯ�� �� => a=%d, b=%d\n", a,b);
}
