#include <stdio.h>

int main() {
	
	int year;
	
	printf("Determine if the given year is leap year or not.\n\n");
	printf("Enter the year :- ");
	scanf("%d", &year);
	if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
		printf("\nThe year %d is a leap year.\n\n", year);
	}else {
		printf("\nThe year %d is not a leap year.\n\n", year);
	}
	printf("Thank you.");
	
}