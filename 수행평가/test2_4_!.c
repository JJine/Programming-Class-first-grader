//�� ���� ����(~100)�� �����޾� ���-test2_4_1.c
//����1 : ������ �Է��� ���� 'Enter'������� ����(1~10���� ����)
//����2 : ���ʿ��� ���ڴ� �Է¹��� ����
//����3 : �ݺ����� 3�� ���ϸ� ���
//����4 : �з��� �ּ����� ����, ��({})�� �����ϰ� 30���� ���Ϸ� �ۼ�
#include <stdio.h>
main()
{
	int a, b, c;
	
	printf("������ �Է��ϼ��� =>");
	do{
		a=getch()-'0';
	}while(a<0||a>9);
	printf("\n���� : %d",a);	
	
	if(a==0) { return;}
	do {
		b=getch()-'0';	
	}while(b<0||b>9);
	printf("%d\n", b);
		
	if(b==1&&a==0) { 
		do {
			c=getch()-'0';
			if(c==-35) { return; }
		}while(c!=0);
	printf("%d",c); 
	}
	
	
//#include <stdio.h> 
//main() {
//    int a,b,c
//    printf("������ �Է��ϼ���");
//
//    do
//    {
//        a = getch() - '0';
//    }while(a[0]<0 || a>9);
//    printf("\n���� : %d", a[0]);
//
//    if(a==0) {
//
//        return;
//    }
//    do
//    {
//        b = getch() - '0';
//    }while(b<0 || b>9);
//    printf("%d", a[1]);
//
//    if(a[1]==0 && b==1) {
//        do
//        {
//           c=getch()-'0';
//           if(c==-35) {
//               return;
//           }
//      }while(c!=0);
//    printf("%d", );
//}
//}	
}
