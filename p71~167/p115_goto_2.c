//p115_goto_2
#include <stdio.h>
main()
{
	int i, j;
	
	for(i=1;i<=3;i++)
		for(j=1;j<=5;j++)
		{
		if(i==2) goto exit; 
		printf("%d * %d = %d\n", i, j, i*j);
		}
	exit: printf("The End");//label (��) 
 } 
