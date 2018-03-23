
#include <stdio.h>

int main(void) {

	int i_1=365, i_2= 12.258, i_3=996;
	int j_1=7, j_2=23, j_3=4;
	int k_1, k_2, k_3;

	k_1= i_1 + j_1 - (i_1%j_1);
	k_2= i_2 + j_2 - (i_2%j_2);
	k_3= i_3 + j_3 - (i_3%j_3);

	printf(" i_1=%i \n i_2=%i \n i_3=%i", k_1, k_2, k_3);
	return 0;
}
