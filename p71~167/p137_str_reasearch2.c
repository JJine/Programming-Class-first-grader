//research
#include <stdio.h>
#include <string.h>
main()
{
	int i, j, n1, n2, pos, sum=0; //n1, n2�� �� ���ڿ��� ���� 
	char st1[50], st2[20], st3[70]; //�⺻ ���ڿ��� �˻��� ���ڿ�  
	
	printf("*** ���ڿ� �˻� ***\n\n");
	printf("�⺻ ���ڿ� => ");
	gets(st1);
	printf("�˻��� ���ڿ� => ");
	gets(st2);
	
	n1=strlen(st1), n2=strlen(st2);
	for(i=0;i<=n1-n2+1;i++) //�˻� ������ ã�� �� 
	{
		pos=i;
		for(j=0;j<n2;j++)
			if(st1[pos]!=st2[j]) //��ġ���� �ʴ´ٸ� ���� ��ġ�� �ϳ��� �з�����.  
				break;
				else pos++;
		if(j==n2) { //�˻��� j�� �˻��� ���� n2�� ���ٸ�  
			sum++;
			i=i+strlen(st2);
		}
	}
	
	printf("\n�⺻ ���ڿ��� \"%s\"��(��) %d�� ���ԵǾ����ϴ�. \n", st2, sum);
	
}
