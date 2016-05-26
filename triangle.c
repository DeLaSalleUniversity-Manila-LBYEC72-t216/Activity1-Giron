#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int area, base, height;
	
	
	printf("Input triangle's base: ");
	scanf("%d", &base);
	
	printf("Input triangle's height: ");
	scanf("%d", &height);
	
	area=(base*height)/2;
	
	printf("The triangle's area is %d", area);
	return 0;
}
