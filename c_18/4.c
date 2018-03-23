#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float C = 0;
	int f = 0;
	scanf("%i",&f);
	C=(f-32)/(1.8);
	printf("Температура по цельсию %f", C);
	return 0;
}
