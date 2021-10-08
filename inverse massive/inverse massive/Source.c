//Copyrigt 2021 esthete014 Nikolay Kochetov

//podkluchenie bibliotek
#include <stdio.h>//vvod
#define SIZE 10//razmer massiva


int main() {

	//inicializaciya
	int mass[SIZE];
	int vremennay;

	//vvod massiva
	for (int i = 0; i < SIZE; i++) {
		scanf_s("%d", &mass[i]);
	}

	//vivod ne izmenennogo massiva
	printf("massive do izmeneniya: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", mass[i]);
	}

	//imenenie massiva
	for (int i = 0; i < SIZE / 2; i++) {
		vremennay = mass[i];
		mass[i] = mass[i + SIZE / 2];
		mass[i + SIZE / 2] = vremennay;
	}

	//vivod izmenennogo massiva
	printf("\nmassive posle izmeneniya: ");
	for (int i = 0; i < SIZE; i++) {
		printf("%d ", mass[i]);
	}

	//ochishenie massiva vizivaet oshibku
	//free(mass);

	return 0;
}