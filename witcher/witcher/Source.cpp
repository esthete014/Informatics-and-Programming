#include <stdio.h>

int main() {
	int vsedengi, money25 = 0, money10 = 0, money5 = 0, money1 = 0;
	scanf_s("skolko nado dat' deneg wed'maku: %d", vsedengi);
	while (vsedengi >= 25) {
		vsedengi -= 25;
		money25 += 1;
	}
	while (vsedengi >= 25) {
		vsedengi -= 25;
		money25 += 1;
	}
	while (vsedengi >= 10) {
		vsedengi -= 10;
		money10 += 1;
	}
	while (vsedengi >= 5) {
		vsedengi -= 5;
		money5 += 1;
	}
	while (vsedengi >= 1) {
		vsedengi -= 1;
		money1 += 1;
	}
	printf("money25: %d\nmoney10: %d\nmoney5: %d\nmoney1: %d\n", money25, money10, money5, money1);
	return 0;
}