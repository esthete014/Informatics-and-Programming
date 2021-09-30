#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy
#include <cmath>

int main() {
	float zadacha;
	//snacala mi sprosim shto nado vivesti
	printf("kakuiu zadachu nado reshit':\n 1 srednee arifmeticheskoe\n 2 srednee kvadratov etih chisel\n 3 srednee moduley\n 4 srednee korney\n");
	scanf_s("%f", &zadacha);
	//vvedem dannie
	float a, b, c;
	float reshenie;

	printf("Vvedite 3 chisla(cherez probel):\n");
	scanf_s("%f %f %f", &a, &b, &c);

	//teper' budem reshat'
	if (zadacha == 1) {
		reshenie = (a + b + c) / 3;
	}
	else if (zadacha == 2) {
		reshenie = (pow(a, 2) + pow(b, 2) + pow(c, 2)) / 3;
	}
	else if (zadacha == 3) {
		reshenie = (abs(a) + abs(b) + abs(c)) / 3;
	}
	else if (zadacha == 4) {
		reshenie = (sqrt(a) + sqrt(b) + sqrt(c)) / 3;
	}
	printf("otvet = %f", reshenie);

	return 0;
}