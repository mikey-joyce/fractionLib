#include "fractionLib.h"

void fMultDiv(int flag, int n1, int d1, int n2, int d2, int *num, int *denom){
	if(flag==1){
		//Flag == 1 is multiplication
		*num = (n1*n2);
		*denom = (d1*d2);
		fSimplify(num, denom);
	}
	else if(flag==0){
		//Flag == 2 is division
		*num = (n1*d2);
		*denom = (n2*d1);
		fSimplify(num, denom);
	}
	else{
		perror("Invalid flag");
	}
}

void fAddSub(int flag, int n1, int d1, int n2, int d2, int *num, int *denom){
	int midN1=(d2*n1);
	int midN2=(d1*n2);
	*denom=(d2*d1);

	if(flag==1){
		//Flag == 1 is addition
		*num=(midN1+midN2);

		fSimplify(num, denom);
	}
	else if(flag==0){
		//Flag == 0 is subtraction
		*num=(midN1-midN2);

		fSimplify(num, denom);
	}
	else{
		perror("Invalid flag");
	}
}

void fSimplify(int *num, int *denom){
	//int midNum=*num;
	//int midDenom=*denom;
	int nextNum=*num;
	int nextDenom=*denom;
	int flag=1;

	while(flag==1){
		//nextDenom=(midDenom/2);
		//nextNum=(midNum/2);
		if(nextDenom%2!=0||nextNum%2!=0){
			*denom=nextDenom;
			*num=nextNum;
			flag=0;
		}
		else{
			nextDenom=(nextDenom/2);
			nextNum=(nextNum/2);
		}
	}
}

void printFrac(int num, int denom){
	printf("%d / %d\n", num, denom);
}
