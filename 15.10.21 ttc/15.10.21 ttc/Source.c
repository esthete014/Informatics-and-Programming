//Copyrigt 2021 esthete014 Nikolay Kochetov

//podkluchenie bibliotek
#include <stdio.h>//vvod

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

		//zapolnenie massiva ballov abiturientov
		for (int i = 0; i < abiturienti;) {
			int a, b, c = 0;//balli
			printf("vvodi balli abiturientov:\n");
			printf("abiturient ¹%d", i);
			scanf_s(" %d %d %d\n", &a, &b, &c);
			balli[i] = a + b + c;
		}

		for (int j = 0; j < mesta;) {
			int nomer, sravnenie = 0;
			for (int i = 0; i < abiturienti;) {
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
		for (int i = 0; i < mesta;) {
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