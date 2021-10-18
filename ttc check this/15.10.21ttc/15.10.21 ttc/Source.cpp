//Copyrigt 2021 esthete014 Nikolay Kochetov

//podkluchenie bibliotek
#include <stdio.h>//vvod
#include <malloc.h>
#include <algorithm>

int compare(const void* x1, const void* x2)   // 
{
	return (*(int*)x1 - *(int*)x2);
}


int main() {
	while (1) {
		//inicializaciya
		int mesta, abiturienti;
		int* max;
		int* balli;
		int* massnomerov;
		int* prohodballi;


		//vvod
		printf("\nvvedi skolko mest, a zatem kollichestvo abiturientov(cherez probel) ");
		scanf_s("%d %d", &mesta, &abiturienti);
		balli = (int*)malloc(abiturienti * sizeof(int));
		massnomerov = (int*)malloc(mesta * sizeof(int));
		prohodballi = (int*)malloc(mesta * sizeof(int));

		//zapolnenie massiva ballov abiturientov
		for (int i = 0; i < abiturienti; i++) {
			int a, b, c = 0;//balli
			printf("\nvvodi balli abiturientov:\n");
			printf("abiturient ¹%d", i);
			scanf_s("%d %d %d", &a, &b, &c);
			balli[i] = a + b + c;
		}

		for (int j = 0; j < mesta; j++) {
			int nomer = 0, sravnenie = 0;
			for (int i = 0; i < abiturienti; i++) {
				if (sravnenie < balli[i]) {
					sravnenie = balli[i];
					nomer = i;
				}
			}
			balli[nomer] = 0;
			massnomerov[j] = nomer;
			prohodballi[j] = sravnenie;
		}
		qsort(prohodballi, mesta, sizeof(int), compare);
		qsort(massnomerov, mesta, sizeof(int), compare);

		//vivod
		printf("\nprohodnoi ball: %d\n", prohodballi[0]);
		for (int i = 0; i < mesta; i++) {
			printf("nomera proshedshih: %d\n", massnomerov[i]);
		}

		//menu
		int vihod = 0;
		printf("\nesli hochesh viyti, najmi 1: ");
		scanf_s("%d", &vihod);
		if (vihod == 1) {
			break;
		}
	}

	return 0;
}