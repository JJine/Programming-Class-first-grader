//2������ �迭�� ����(p132.2array)
#include <stdio.h>
#define NO 10
main()
{
	int n, art[NO], pro[NO];
	
	srand(time(NULL));
	for(n=1;n<=NO;n++)
		art[n]=50+rand()%51;
	for(n=1;n<=NO;n++)
		pro[n]=50+rand()%51;
		
	printf("��ȣ ���� ����\n");
	printf("---------------\n");
	for(n=1;n<=NO;n++)
		printf("%2d => %3d %3d\n", n+1, art[n]);
}
