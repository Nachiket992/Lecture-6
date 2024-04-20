#include<stdio.h>

int main() {
	
	int a;
	
	printf("Find if a given number is neutral or not.\n\n");
	printf("Enter any number :- ");
	scanf("%d", &a);
	if(a == 0) {
		printf("\nThis number is Neutral.\n\n");
	}
	if(a > 0) {
		printf("\nThis number is Positve.\n\n");
	}
	if(a < 0) {
		printf("\nThis number is Negative.\n\n");
	}
	printf("Thank you.");
	
	
}