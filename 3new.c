#include <stdio.h>
int main() {
	int a = 21;
	int b = 10;
	int c = c1 + c2 + c3 + c4 + c5 + c6;
	int c1 = a + b;
	printf("Line 1 - Value of c is %d\n", c1);
	int c2 = a - b;
	printf("Line 2 - Value of c is %d\n", c2);

	int c3 = a / b;
	printf("Line 3 - Value of c is %d\n", c3);

	int c4 = a % b;
	printf("Line 4 - Value of c is %d\n", c4);

	int c5 = a++;
	printf("Line 5 - Value of c is %d\n", c5);

	int c6 = a--;
	printf("Line 5 - Value of c is %d\n", c6);
	 
	printf("The value of c %d", c);
	 
}
