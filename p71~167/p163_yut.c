//p163_yut
#include <stdio.h>
int f(int a, int b, int c, int d) {
	return a+b+c+d;
}

main() {
	int a, b, c, d;
	
	printf("4���� ���� ���¸� �Է��ϼ���.\n");
	printf("(0 : ���������� ���� ����, 1 : �������� ����) : \n");
	scanf("%d %d %d %d", &a, &b, &c, &d);
	switch(f(a,b,c,d)) {
		case 1 : printf ("�� :1���� �������� ����\n");
				 break;
		case 2 : printf ("�� : 2���� �������� ����\n");
				 break;
		case 3 : printf ("�� : 3���� �������� ����\n");
				 break;
		case 4 : printf ("�� : 4���� �������� ����\n");
				 break;
		default : printf("�� : �ϳ��� ���������� ���� ����\n");
	}
}


