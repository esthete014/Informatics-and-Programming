#include <stdio.h>


/*
int main() {
	int num;
	int isError;



	do {
		if (isError) printf("input positive number ");
		scanf_s("%d", &num);
		isError = (num <= 0);
	} while (isError);



	int answer = 0;
	printf("result: %d\n", answer);
	return 0;
}

*/





int main() {
	int var;
	int work = 1;
	int error;
	do {
		while (work == 1){
			printf("viberi chto sdelat':\n 1 invertirovat' chislo\n 2 podschitat' summu cifr\n");
			scanf_s("%d\n", &var);
		
			if (var == 1 || var == 2) {
				work *= 0;
			}
			else;
				printf("ti debil?\n");
		} //HELP etot kusok koda ne hochet rabotat' normal'no


	
		int chislo;//i pisal s float, no togda on podchercivaet vse
		float proverkanol;
		float otvet;
		if (var == 1) {
			scanf_s("napishi chislo: %d", &chislo);
			proverkanol = chislo % 10;//pochemu on ne hochet ego vo FLOAT brat'???????????????
			while (proverkanol == 0) {
				chislo /= 10;
				proverkanol *= 0;//nichego ne pomogaet
				proverkanol = chislo % 10;//i ne ponimau etu oshibku
			}
			while (chislo > 1) {
				otvet = (chislo % 10) * 10;//opyat' oshibka(((((((((
			}
			printf("otvet 1 varianta: %f", otvet);
		}
		if (var == 2) {
			scanf_s("napishi chislo: %f", &chislo);
			while (chislo > 1) {
				otvet += chislo % 10;
			}
			printf("otvet 2 varianta: %f", otvet);
		}

	} while (work);


	return 0;
}//i ne ponimau kakie oshibki u meny vilezaut i ot chego