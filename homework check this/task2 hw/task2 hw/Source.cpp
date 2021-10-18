//Copyrigt 2021 esthete014 Nikolay Kochetov

#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main() {
	int varigri;
	while (1) {
		int solved;
		solved = 0;
		printf("viberi variant igri\n1ti ugadivaesh\n2i ugadivau\n");
		scanf_s("%d", &varigri);
		//1 variant igri
		if (varigri == 1){
			float chislo, dogadka, popitki;
			popitki = 1;
			chislo = 1 + rand() % (1000 + 1);
			printf("davai ugadivai(ot 1 do 1000)\n");
			scanf_s("%f", &dogadka);
			while (dogadka != chislo) {
				popitki += 1;
				printf("ne ugadal(((\npoprobui one more time\n");
				if (dogadka < chislo) {
					printf("nado bol'she");
				}
				if (dogadka > chislo) {
					printf("nado men'she");
				}
				scanf_s("%f", &dogadka);
								

			}
			if (chislo == dogadka) {
				printf("ogo, krutoi\npopitki:%f", popitki);
				solved = 1;
			}
		}
		//2 vaiant igri
		if (varigri == 2) {
			float chislo, dogadka, popitki;
			int  min, max;
			char menbol;//men'she ili bol'she
			min = 1;
			max = 1001;
			popitki = 0;
			chislo = 0;
			printf("davai zagadivai ot 1 do 1000\n");
			while (solved == 0) {
				popitki += 1;
				dogadka = min + rand() % max;
				printf("dogadka: %f\n", dogadka);
				scanf_s("%s", &menbol);
				if (menbol == 62) {
					printf("ne ugadal(((\npoprobuiu one more time\nnado men'she ili bol'she?\n");
					min = dogadka;
				}
				if (menbol == 60) {
					printf("ne ugadal(((\npoprobuiu one more time\nnado men'she ili bol'she?\n");
					max = dogadka;
				}
				if (menbol == 61) {
					printf("ogo i krutoi)))\npopitki: %f", popitki);
					chislo = dogadka;
					solved += 1;
					break;
				}
			}			
		}
		//menu
		if (solved == 1) {
			int con;
			printf("if u want to end press 0(else:1)\n");
			scanf_s("%d", &con);
			solved = 0;
			if (con == 0) {
				break;
			}
		}
		else {
			printf("chitai, a ne tikai naugad\ni staralsy voobshe-to(((");
		}
	}
	return 0;
}