#include <stdio.h>
void main(void){
	double r, l, phi = 3.14, *p = &r;
	printf("r의 값을 입력: ");
	scanf_s("%lf", p);
	printf("r == %f, %r == %d\n", r, &r);
	printf("*p == %f, p==%d \n", *p, p);
	printf("p에 할당된 메모리의 크기 == %d바이트\n", sizeof(p));
	l = 2.0 * phi * *p;
	printf("원둘레 l == %f\n", l);
} 
