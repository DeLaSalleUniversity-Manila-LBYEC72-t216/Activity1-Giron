#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int year, age;
	
	printf("Input your birth year: ");
	scanf("%d",&year);
	
	age=2016-year;
	
	printf("Your age is %d", age);
	return 0;
}
