//p109b_odd
#include <stdio.h>
main()
{
	int i,sum=0;
	
	for (i=1; i<=100; i=i+2) {
		printf ("i=>%d\n", i);
		sum=sum+i;
	}
	printf ("��� : %d", sum);
}
