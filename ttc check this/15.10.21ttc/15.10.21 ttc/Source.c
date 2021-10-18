//Copyrigt 2021 esthete014 Nikolay Kochetov
/*
//podkluchenie bibliotek
#include <stdio.h>//vvod
#include <malloc.h>
//#include <>

int main() {
	while (1) {
		//inicializaciya
		int mesta, abiturienti;
		int* max;
		int* balli;
		int* massnomerov;
		int* prohodballi;


		//vvod
		scanf_s("\nvvedi skolko mest, a zatem kollichestvo abiturientov(cherez probel) %d %d\n", &mesta, &abiturienti);
		balli = (int*)malloc(abiturienti * sizeof(int));
		massnomerov = (int*)malloc(mesta * sizeof(int));
		prohodballi = (int*)malloc(mesta * sizeof(int));

		//zapolnenie massiva ballov abiturientov
		for (int i = 0; i < abiturienti; i++) {
			int a, b, c = 0;//balli
			printf("vvodi balli abiturientov:\n");
			printf("abiturient ¹%d", i);
			scanf_s(" %d %d %d\n", &a, &b, &c);
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
		sort(prohodballi);
		sort(massnomerov);

		//vivod
		printf("prohodnoi ball: %d\n", prohodballi[0]);
		for (int i = 0; i < mesta; i++) {
			printf("nomera proshedshih: %d\n", massnomerov[i]);
		}

		//menu
		int vihod = 0;
		scanf_s("esli hochesh viyti, najmi 1: %d\n", &vihod);
		if (vihod == 1) {
			break;
		}
	}

	return 0;
}
*/