//��ũ�� p160_macrol 
#include <stdio.h>
#define TWO 2
#define MSG "Teacher Kim has become a old \
gentleman with grey hair"
#define FOUR TWO * TWO
#define PX printf("X is %d.\n", x)
#define FMT "X is %d, \n"

main() {
	int x = TWO;
	PX;
	x=FOUR;
	printf(FMT, x);
	printf("%s \n", MSG);
	printf("TWO : MSG \n");
}
