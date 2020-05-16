#include <stdio.h>
int main(void) {
	int a = 1000000;	//원금
	int b;		//연단위

	printf("예치기간(년) : \n");
	scanf_s("%d",&b);
	printf("년단위=%.f\n ",a*0.045*b);
	printf("만기시 총 수령약=%.f\n",a*(1+0.045)*b);

	return 0;
}