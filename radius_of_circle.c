//명품c programming 2장 163p 연습문제 9번
#include <stdio.h>
#define pi 3.14
int main(void) {
	float a=7.58; //원의 반지름
	float b=a*a*pi; //면적공식
	float c=2*pi*a;//둘레공식
	printf("%f",b); //원의  반지름으로 면적공식 출력
	printf("%f" ,c);//원의 반지름으로 둘레공식
	return 0;
}