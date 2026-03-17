#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int sales[12];
	int total = 0;
	int maxs = 0;
	for (int i = 0; i < 12; i++) {
		sales[i] = rand() % 1000;
		total = total + sales[i];
		printf("%d월 매출 : %d 총 매출 합계 : %d\n", i + 1, sales[i], total);
	}


	return 0;
}