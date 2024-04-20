#include<stdio.h>

main() {
	
	int a;
	
	printf("Check the student's grads which falls within a specific rang.\n\n");
	printf("Enter the student's mark :- ");
	scanf("%d", &a);
	if(a >= 90) {
		printf("\nThis student's grad is A.\n\n");
	}
	else if(a >= 80 && a < 90) {
		printf("\nThis student's grad is B.\n\n");
	}
		else if(a >= 70 && a < 80) {
		printf("\nThis student's grad is C.\n\n");
	}
		else if(a >= 60 && a < 70) {
		printf("\nThis student's grad is D.\n\n");
	}
	else {
		printf("\nSorry, But this student is Fail.\n\n");
	}
	printf("Thank you.");
	
}