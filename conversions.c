/*
   you need to use the file "metric.h" to run this program
   i've layed out the acronyms in the definitions in metric.h in the "definitions btiches" segment
   you can just google the values instead of using my conversion program lol
   alrighty see ya!
*/

/* *******DEFINITION BITCHES********** */

//IPC = inches per centimeter; CPI = centimeters per inch
//QPL = quarts per liter; LPQ = liters per quart
//OPG = ounces per gram; GPO = grams per ounces
//MPK = miles per kilometers; KPM = kilometers per miles

#include <stdio.h>
#include "metric.h"

int main (void)
{
	printf ("What kind of conversion would you like to perform?\n"
"Enter one of the following please:\n"
"For grams to ounces enter '1'\n"
"For ounces to grams enter '2'\n"
"For liters to quarts enter '3'\n"
"For quarts to liters enter '4'\n"
"For centimeters to inches enter '5'\n"
"For inches to centimeters enter '6'\n"
"For kilometers to miles enter '7'\n"
"For miles to kilometers enter '8'\n"
"If you'd like a different conversion you can exit the program now by pressing ctrl+c");
	
	float liters, quarts, centimeters,
	      inches, grams, ounces, kilometers, miles, result;
	char i;
	printf ("\n\nEnter your choice here: ");
	scanf ("%c", &i);

	switch (i)
	{
		case '1':
			printf (
"\n\nHow many grams: ");
			scanf ("%f", &grams);
			result = grams * OPG;
			printf (
"\n%g grams is %g ounces!\n\n", grams, result);
			break;
		case '2':
			printf (
"\n\nHow many ounces: ");
			scanf ("%f", &ounces);
			result = ounces * GPO;
			printf (
"\n%g ounces is %g grams!\n\n", ounces, result);
			break;
		case '3':
			printf (
"\n\nHow many liters: ");
			scanf ("%f", &liters);
			result = liters * QPL;
			printf (
"\n%g liters is %g quarts!\n\n", liters, result);
			break;
		case '4':
			printf (
"\n\nHow many quarts: ");
			scanf ("%f", &quarts);
			result = quarts * LPQ;
			printf (
"\n%g quarts is %g liters!\n\n", quarts, result);
			break;
		case '5':
			printf (
"\n\nHow many centimeters: ");
			scanf ("%f", &centimeters);
			result = centimeters * IPC;
			printf (
"\n%g centimeters is %g inches!\n\n", centimeters, result);
			break;
		case '6':
			printf (
"\n\nHow many inches: ");
			scanf ("%f", &inches);
			result = inches * CPI;
			printf (
"\n%g inches is %g centimeters!\n\n", inches, result);
			break;
		case '7':
			printf (
"\n\nHow many kilometers: ");
			scanf ("%f", &kilometers);
			result = kilometers * MPK;
			printf (
"\n%g kilometers is %g miles!\n\n", kilometers, result);
			break;
		case '8':
			printf (
"\n\nHow many miles: ");
			scanf ("%f", &miles);
			result = miles * KPM;
			printf (
"\n%g miles is %g kilometers!\n\n", miles, result);
			break;
		default:
			break;
	}
	return 0;
}
