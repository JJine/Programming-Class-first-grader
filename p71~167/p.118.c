//2.가장 큰 운동장
#include <stdio.h>
main()
{
	int i, w, h, max=0;
	
	printf("운동장 3개의 가로, 세로의 길이를 차례로 입력하세요. \n");
	
	for(i=1;i<=3;i++)
	{
		scanf("%d %d", &w, &h);
		if(max<w*h)
			max=w*h;
	}
	printf("가장 큰 운동장의 넓이는 %d입니다.\n", max);
 } 
