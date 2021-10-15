//Copyrigt 2021 esthete014 Nikolay Kochetov

//podkluchenie bibliotek
#include <stdio.h>//vvod
#define SIZE 9//razmer massiva


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
	if (SIZE % 2 == 0) {
		for (int i = 0; i < SIZE / 2; i++) {
			vremennay = mass[i];
			mass[i] = mass[i + SIZE / 2];
			mass[i + SIZE / 2] = vremennay;
		}
	}

	if (SIZE % 2 != 0) {
		for (int i = 0; i <= SIZE / 2;) {
			vremennay = mass[i];
			mass[i] = mass[i + (SIZE / 2 + 1)];
			mass[i + (SIZE / 2 + 1)] = vremennay;
			i++;
		}
		printf("\nmassive posle izmeneniya: ");
		for (int i = 0; i < SIZE; i++) {
			printf("%d ", mass[i]);
		}
		int  konechnaya = mass[SIZE / 2 + 1];
		for (int i = SIZE / 2 + 1; i < SIZE;) {
			mass[i] = mass[i + 1];
			i++;
		}
		mass[SIZE - 1] = konechnaya;
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