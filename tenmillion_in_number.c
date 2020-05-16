#include <stdio.h>
int main(void) {
	int a,b,c,d,e;
	printf("정수 천만 이하 입력\n");
	scanf_s("%d",&a);	//2347653
	
	b = a / 10000;	//b=234
	a %= 10000;	//7653
	printf("%d만 ",b);

	c = a / 1000;	//c=7
	a %= 1000;	//653
	printf("%d천 ",c);

	d = a / 100;	//d=6
	a %= 100;	//53
	printf("%d백 ",d);

	e = a / 10;	//e=5
	a %= 10;		//3
	printf("%d십 %d",e,a);

	return 0;
}