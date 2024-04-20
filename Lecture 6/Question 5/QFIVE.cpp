#include<stdio.h>

int main() {
	
	int a;
	
	printf("Classify a given angle into one of the four quadrants based on its measure.\n\n");
	printf("Enter the angle :- ");
	scanf("%d", &a);
	if(a < 90) {
		printf("\nThis falls into the First quadrant.\n\n");
	}
	else if(a >= 90 && a < 180) {
		printf("\nThis falls into the Second quadrant.\n\n");
	}
	else if(a >= 180 && a < 270) {
		printf("\nThis falls into the Third quadrant.\n\n");
	}
	else {
		printf("\nThis falls into the Fourth quadrant.\n\n");
	}
	printf("Thank you.");
	
}