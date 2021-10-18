//Copyrigt 2021 esthete014 Nikolay Kochetov

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <cmath>
#include <time.h>
#include "Source.h"
//#include <iostream.h>
#include <iostream>
#include <vector>
using namespace std;
//tak mnogo bibliotek, potomu chno i pitalsya random normal'niy sdelat'

int main() {
	//dlya menu
	while (1) {
		int vihod = 0;
		int len = 0, predel, chislo, otvet = 0;
		while (len < 2 || len > 5) {
			printf("\nvvedi dlinnu chisla(ot 2 do 5):\n");
			scanf_s("%d", &len);
		}
		std::vector<int> masschislo;
		std::vector<int> massotvet;
		predel = pow(10, len);
		srand(time(0));
		chislo = rand() % predel + (predel / 10);;//srand(time(0))
		//unsigned int vector_size = masschislo.size();
		for (int i = 0; i < len; i++) {
			masschislo[i] = int(int((chislo / pow(10, i))) % int(pow(10, i + 1)));//videlenie cifri iz chisla i zapis' v vector
		}
		while (otvet != chislo) {
			printf("\nvvedi dogadku:\n");
			scanf_s("%d", &otvet);
			if (len != massotvet.size()) {
				printf("nepravil'naya dlinna otveta(((");
				continue;
			}
			int biki = 0, korovi = 0;
			if (len = massotvet.size()) {
				for (int i = 0; i < len; i++) {
					massotvet[i] = int((otvet / pow(10, i))) % int(pow(10, i + 1));//videlenie cifri iz chisla i zapis' v vector
				}
				//proverka sovpadeniy
				//std::vector<int> povtori;
				//std::vector<std::vector<int> > povtori;
				for (int i = 0; i < len; i++) {
					for (int j = 0; j < len; j++) {
						if (masschislo[i] == massotvet[j]) {
							if (i = j) {
								biki += 1;
							}
							if (i != j) {

								korovi += 1;
							}
						}
					}
				}
				//vivod
				printf("biki: %d\nkorovi: %d", biki, korovi);
			}
		}
		printf("molodets))) ti viygral!\nbiki: %d/%d\nvah otvet: %d\nzagadannoe chu=islo: %d", len, len, otvet, chislo);

		


		//vihod
		printf("\nchtobi viyti, najmi 1\n");
		scanf_s("%d", &vihod);
		if (vihod = 1) {
			break;
		}
	}
	

	return 0;
}