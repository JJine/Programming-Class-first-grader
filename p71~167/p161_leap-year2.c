//���� �Ǵ��ϱ�(p161_leap-year2.c) 
#include <stdio.h>
#include <stdbool.h>
main() {
	int year;
	bool leap();
	
	printf("������ �Ǵ��� ������ �Է��Ͻÿ�. => ");
	scanf("%d", &year);
	if(leap(year)==true) 
		printf("%d�⵵�� �����Դϴ�.\n", year);
	else 
		printf("%d�⵵�� ����Դϴ�.\n", year);
} 

bool leap(int yr) {
	if(yr%400 == 0) 
		return true;
	else if(yr%4==0 && yr%100!=0) 
		return true;
	else return false;
}
