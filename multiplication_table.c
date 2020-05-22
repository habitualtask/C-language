#include <stdio.h>
int main(void) {
	int i;	
	scanf_s("%d단",&i);				//출력하고자하는 단을 입력

	for (int j = 1; j < 10; j++) {			//10단까지 출력가능
		printf("%d*%d=%2d\n",i,j,i+j);		//출력 될 곱하기 식
	}
	return 0;
}