//Copyrigt 2021 esthete014 Nikolay Kochetov

//biblioteki
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <string>
#include <time.h>
#include <cmath>
#include <time.h>
//#include "Source.h"
//#include <iostream.h>
#include <vector>
using namespace std;

#define size 10
#define len 10

int main() {
	//dlya menu
	while (1) {
		int vihod = 0;
		
		/*
		std::string students[10] = {
		"moloko", "hleb", "ogurci", "pomidori", "perec", "yabloki", "vishnya", "sosiski", "muka", "makaroni"
		};
		printf("%p", students[1]);


		std::vector<int> tovari;
		for (int i = 0; i < 10; i++) {
			tovari[i].push_back(students[i]);
		}
		*/

		/*
		char product[9];
		strcpy_s(product, " ");
		int tovari[10] = { NULL };
		for (int i = 0; i < 10; i++) {
			tovari[i] = product;
		}
		char product0[9];
		strcpy_s(product0, "moloko");
		char product1[9];
		strcpy_s(product1, "hleb");
		char product2[9];
		strcpy_s(product2, "ogurci");
		char product3[9];
		strcpy_s(product3, "pomidori");
		char product4[9];
		strcpy_s(product4, "perec");
		char product5[9];
		strcpy_s(product5, "yabloki");
		char product6[9];
		strcpy_s(product6, "vishnya");
		char product7[9];
		strcpy_s(product7, "sosiski");
		char product8[9];
		strcpy_s(product8, "muka");
		char product9[9];
		strcpy_s(product9, "makaroni");
		*/

		
		char tovari[size][len] = { 
			{"moloko"}, {"hleb"}, {"ogurci"}, {"pomidori"}, {"perec"}, {"yabloki"}, {"vishnya"}, {"sosiski"}, {"muka"}, {"makaroni"}
		};

		printf("tovari:\n");
		for (int i = 0; i < 10; i++) {
			char* vremennaya = tovari[i];
			printf("%b", vremennaya);
		}





		//vihod
		printf("\nchtobi viyti, najmi 1\n");
		scanf_s("%d", &vihod);
		if (vihod == 1) {
			break;
		}
	}


	return 0;
}
