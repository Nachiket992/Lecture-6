#include<stdio.h>

main() {
	
	int pvalue, tperiod, totali;
	float irate;
	
	printf("Calculate the Simple interest.\n\n");
	printf("Enter the amount :- ");
	scanf("%d", &pvalue);
	if(pvalue > 0) {
		printf("\nEnter the interest rate :- ");
		scanf("%f", &irate);
		printf("\nEnter the time period :- ");
		scanf("%d", &tperiod);
	}
	totali = pvalue*tperiod*irate/100;
	if(pvalue <= 0 || irate <= 0 || tperiod <= 0) {
		printf("\nError, page not found");
	}else {
	printf("\nThe simple rate :- %d", totali);	
	}
}