#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy


int main() {
	float x1, x2, y1, y2, r1, r2;  //obyavlenie peremennih
	float d;

	//pow eto vozvedenie v stepen'
	//sqrt - number
	d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	//1
	if (d == r1 + r2) {
		printf("okrugnosti kasautsa");
	}

	//2
	if (d < r1 + r2) {
		//2.1
		if (d == 0 && r1 == r2) {
			printf(" ");
		}
		//2.2
		else if (d + r1 < r2 || d + r2 < r1) {
			printf(" ");
		}
		//2.3
		else {
			printf(" ");
		}
	}
	//3
	if (d > r1 + r2) {
		printf("nikak ne svyzani");
	}


	return 0;
}