//Copyrigt 2021 esthete014 Nikolay Kochetov
/*
изучаем базовые операции над массивами:
1научиться заполнять массивы
2заполнять массивы
3функции над ними:
3.1произведение нечетных элементов
3.2произведение элементов с нечетными индексами
3.3произведение элементов нечетных по значению
3.4поменять местами элементы с заданными индексами
3.5поменять местами правую и левую половины местами(два способа)
3.5.1с  использованием доп массива
3.5.2без использования доп массива

*/

#include <stdio.h>
#define SIZE 10
#include <malloc.h>
#include <stdlib.h>
#include <time.h>
/*
int main() {
	//statichnie massivi
	float massize[SIZE] = { 0 };



	printf("%f", massize[0]);
	
	//dinamicheskie massivi
	//int* mass;//zvezda eto ukazatel' na nachalo massiva
	int size;
	printf("input size of the array: \n>");
	scanf_s("%d", &size);

	int* mass;//zvezda eto ukazatel' na nachalo massiva
	mass = (int*)malloc(size * sizeof(int));

	float* mass_f = (float*)malloc(size * sizeof(float));//toje samoe no v odku strochku

	//zapolnenie massiva
	//luchshe razdelyt' for na inizializatsiu i deistvie
	//inicializatsiy
	int i;
	for (i = 0; i < size; i++) {
		mass[i] = -5 + rand() % (10 +1);//chislo ot -5 do 5

		
	}
	//deistvie
	i = 0;
	for (i = 0; i < size; i++) {
		printf("%d", mass[i]);
	}



	//mojno cherez while
	
	i = 0;
	while (i < size) {
		mass[i] = 5;

		i++;
	}
	


	//v konce programmi luchshe chistit' massivi
	free(mass);
	free(mass_f);
	return 0;
}
*/


int main() {
	//3.5
	int size, i;
	scanf_s("%d", &size);
	float* mass_f = (float*)malloc(size * sizeof(float));
	

	for (i = 0; i < size; i++) {
		mass_f[i] = -5 + rand() % (10 + 1);//chislo ot -5 do 5
	}
	for (i = 0; i < size; i++) {
		printf("%d", mass_f);
	}
	
	free(mass_f);
	return 0;
}