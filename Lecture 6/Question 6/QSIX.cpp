#include<stdio.h>

int main() {
	
	int age;
	char citizenship_status;
	
	printf("Check if a person is eligible to vote based on their age and citizenship status.\n\n\n");
	printf("<==Enter the age of the person.==>\n\n");
	printf("Enter the age :- ");
	scanf("%d", &age);
	printf("<==Enter the person's citizenship status.==>\n\n");
	printf("Enter 'Y' if your a citizen, or Enter 'N' if your not a citizen\n\n");
	printf("Enter your citizenship status :- ");
	scanf(" %c", &citizenship_status);
	if(age >= 18 && citizenship_status == 'y') {
		printf("\nYour are eligible for vote.\n\n");
	}else {
		printf("\nYour are not eligiblr for vote.\n\n");
	}
	printf("Thank you.");
	
}