#include <stdio.h>  //biblioteka dly vvoda
#include <math.h>  //biblioteka dly mat deystviy

int main() {
	int kolpolok;
	float xsm, ysm, zsm, x, y, z;
	//float dsp, dvp, derevo;
	float obiemdsp, vesdsp, vesdvp, vesderevo;//dvp i derevo po odnoi detali
	float zadnyystenka, bokovaystenka, verhnizkrishka, polki, dveri;
	float vesshkafa;
	printf("napishite cherez probel kaku'u nado visotu(ot 180 do 220sm), shirinu(ot 80 do 120sm) i glubinu(ot 50 do 90sm) shkafa\n");
	scanf_s("%f %f %f", &ysm, &xsm, &zsm);
	//perevodim v metri
	x = xsm / 100;
	y = ysm / 100;
	z = zsm / 100;
	//plotnost' dsp = 685 dvp 1080 derevo = 900

	if (ysm > 179 && ysm < 221 && xsm > 79 && xsm < 121 && zsm > 49 && zsm < 91) {
		zadnyystenka = y * x * 0.0005;//dvp
		//bobkovih stenok dve
		bokovaystenka = y * z * 0.0015 * 2;//dsp
		verhnizkrishka = z * x * 0.0015 * 2;//dsp
		dveri = x * y * 0.001;//derevo
		//kollicestvo polok
		kolpolok = y / 40;
		polki = x * z * kolpolok * 0.0015;//dsp
		//tolshina ne bila ukazana, poetomu i vzyl tu, kotoray bila u drugih dsp

		//obiem dsp
		obiemdsp = bokovaystenka + verhnizkrishka + polki;

		//ves
		vesdsp = obiemdsp * 685;
		vesdvp = zadnyystenka * 1080;
		vesderevo = dveri * 900;

		vesshkafa = vesdsp + vesdvp + vesderevo;
		printf("ves shkafa raven %f (kg)", vesshkafa);
	}
	else {
		printf("dannie ne corectni");
	}

	return 0;
}