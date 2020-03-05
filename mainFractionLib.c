#include "fractionLib.h"

int main(void){
	//Test main to test this

	int n1=1;
	int n2=2;
	int d1=4;
	int d2=5;

	int finalN=0;
	int finalD=0;

	fMultDiv(1,n1,d1,n2,d2, &finalN, &finalD);
	printFrac(finalN, finalD);

	fMultDiv(0,n1,d1,n2,d2, &finalN, &finalD);
	printFrac(finalN, finalD);

	fAddSub(1,n1,d1,n2,d2, &finalN, &finalD);
	printFrac(finalN, finalD);

	fAddSub(0,n1,d1,n2,d2, &finalN, &finalD);
	printFrac(finalN, finalD);

	return 0;
}
