#include <stdio.h>
int main () {
	int age;

	printf("Please enter your age:  ");
	scanf("%d", &age);
	if (age < 20) {
			printf("You are pretty young\n");
	} 	
	else if (age == 20) {
		printf("You are old\n");
	}
	else {
		printf("you are really old\n");
	}
	return 0;
}
			
			
