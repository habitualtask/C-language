#include <stdio.h>
int main(void) {
	double x, y;
	printf("두 실수 입력 : ");
	scanf_s("%lf %lf",&x,&y);

	if (x, y > 0) {
		printf("%lf+%lf=%lf",x,y,x+y);
	}else if (x > 0, y <= 0) {
		printf("%lf+%lf=%lf",x,y,x-y);
	}else if (x >= 0, y > 0) {
		printf("-%lf+%lf=%lf",x,y,-x+y);
	}else if (x >= 0, y >= 0) {
		printf("-%lf-%lf=%lf",x,y,-x-y);
	}
	return 0;
}