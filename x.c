#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float num;
	float fofx;
	printf("Input a value for x: ");
	scanf("%f", &num);
	
	fofx=(num/70);
	
	printf("f(x) is equal to %.2f", fofx);
	return 0;
}
