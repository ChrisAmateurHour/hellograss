#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	/*
	if (argc <= 1) {
		printf("number please or i fite\n");
		return 1;
	}
	*/
	char str[3];
	printf("what your fav number? ");
	fgets(str, 3, stdin);
	int myint = atoi(str);
	printf("Stuff\n");
	printf("Number of numbers: %d\n", myint);
	
	for (int row = 0; row < myint; row++) {
		for (int col = 0; col <= row; col++) {
			printf("*");
		}
		printf("\n");
	}
}