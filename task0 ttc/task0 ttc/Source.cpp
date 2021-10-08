#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy

#define M_PI 3.14


int main() {
	float zadacha, visota, osnovanie, storona1, storona2, radius, ploshad;
	printf("viberi figuru: \n 1. treugolnik \n 2. pryamougolnik \n 3. krug");
	scanf_s("%f", &zadacha);
	if (zadacha == 1) {
		printf("pishi visotu i osnovanie");
		scanf_s("%f, %f", &visota, &osnovanie);
		ploshad = (visota * osnovanie) * 0.5;
	}
	if (zadacha == 2) {
		printf("pishi storoni");
		scanf_s("%f, %f", &storona1, &storona2);
		ploshad = storona1 * storona2;

	}
	if (zadacha == 3) {
		printf("pishi radius");
		scanf_s("%f", &radius);
		ploshad = M_PI * radius;

	}



	return 0;
}
