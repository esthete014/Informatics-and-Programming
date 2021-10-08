#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy


int main() {
	int kolpolok;
	double xsm, ysm, zsm, x, y, z;
	double obiemdsp, vesdsp, vesdvp, vesderevo;//dvp i derevo po odnoi detali
	double zadnyystenka, bokovaystenka, verhnizkrishka, polki, dveri;
	double vesshkafa;
	printf("napishite cherez probel kaku'u nado visotu(ot 180 do 220sm), shirinu(ot 80 do 120sm) i glubinu(ot 50 do 90sm) shkafa\n");
	scanf_s("%f %f %f", &ysm, &xsm, &zsm);
	//perevodim v metri
	x = xsm / 100;
	y = ysm / 100;
	z = zsm / 100;

	//plotnost' materialov
	float dsp, dvp, derevo;
	dsp = 685;
	dvp = 1080;
	derevo = 900;

	//razmeri
	double mm5, mm15, sm1, mejdupolkmi;
	mm5 = 0.005;
	mm15 = 0.015;
	sm1 = 0.01;
	mejdupolkmi = 0.4;

	if (ysm > 179 && ysm < 221 && xsm > 79 && xsm < 121 && zsm > 49 && zsm < 91) {
		zadnyystenka = y * x * mm5;//dvp
		//bobkovih stenok dve
		bokovaystenka = y * z * mm15 * 2;//dsp
		verhnizkrishka = z * x * mm15 * 2;//dsp
		dveri = x * y * sm1;//derevo
		//kollicestvo polok
		kolpolok = y / mejdupolkmi;
		polki = x * z * kolpolok * mm15;//dsp
		//tolshina ne bila ukazana, poetomu i vzyl tu, kotoray bila u drugih dsp

		//obiem dsp
		obiemdsp = bokovaystenka + verhnizkrishka + polki;

		//ves
		vesdsp = obiemdsp * dsp;
		vesdvp = zadnyystenka * dvp;
		vesderevo = dveri * derevo;

		vesshkafa = vesdsp + vesdvp + vesderevo;
		printf("ves shkafa raven %f (kg)", vesshkafa);
	}
	else {
		printf("dannie ne corectni");
	}

	return 0;
}