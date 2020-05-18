#include <stdio.h>
int main(void) {
	int year, x, y;
	printf("년도를 입력하시오 : ");
	scanf_s("%d",&year);

	if (year % 4 == 0) {
		printf("윤년입니다.\n");
	}else if (year % 4 != 0) {
		printf("평년입니다.\n");
	}else if (year % 100 == 0) {
		printf("평년입니다.\n");
	}else if (year % 400 == 0) {
		printf("원년입니다.\n");
	}
	return 0;
}