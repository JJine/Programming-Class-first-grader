//p.92_switch2.c
#include <stdio.h>
main()
{
	int score;
	
	printf("�� ����=> ");
	scanf("%d", &score);
	printf ("���� ���=> ");
	
	switch(score) {
		case 100: 
		case 90: printf ("A����Դϴ�.\n");
				 break;
		case 80: printf ("B����Դϴ�.\n");
				 break;
		case 70: printf ("C����Դϴ�.\n");
				 break;
		case 60: printf ("D����Դϴ�.\n");
			   	 break;
		default: printf ("�����ϴ�\n");		
	} 
		return 0;
}
