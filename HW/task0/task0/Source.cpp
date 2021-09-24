#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy


int main() {
	float x1, x2, y1, y2, r1, r2;  //obyavlenie peremennih
	float d;

	//vvodim dannie
	printf("vvedite dannie okrugnosti cherez probel(posle nagmite ENTER i vvedite dly vtoroi\n");
	scanf_s("%f %f %f", &x1, &y1, &r1);
	scanf_s("%f %f %f", &x2, &y2, &r2);


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
			printf("okrugnosti sovpadaut");
		}
		//2.2
		else if (d + r1 < r2 || d + r2 < r1) {
			printf("okrugnost' legit odna v drugoi");
		}
		//2.3
		else if (d + r1 < r2 and d + r2 < r1) {
			printf("okrugnost' legit odna v drugoi i kasaetsa");
		}
		//2.4
		else {
			printf("okrugnosti peresekautsa");
		}
	}
	//3
	if (d > r1 + r2) {
		printf("nikak ne svyzani");
	}


	return 0;
}