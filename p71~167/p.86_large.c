//3�� ����(p86_large)
#include <stdio.h>
main()
{
	int su1, su2, big;
	
	printf ("�� ���� �Է��ϸ�, ū ���� ã���ϴ�. =>");
	scanf ("%d %d", &su1, &su2);
	//big=(su1>su2) ? su1:su2;
	
	if (su1>su2) {
		printf ("ū ��%d �Դϴ�",su1);
	}
	else {	
		printf ("ū ��%d �Դϴ�",su2);
	}
	return 0;
 } 
