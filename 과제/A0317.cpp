#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	int sales[12];
	int total = 0;
	int maxs = 0;
	int maxm;
	for (int i = 0; i < 12; i++) {
		sales[i] = rand() % 1000;
		total = total + sales[i];
		printf("%d월 매출 : %d 총 매출 합계 : %d\n", i + 1, sales[i], total);
	}

	for (int i = 0; i < 12; i++) {
		if (maxs < sales[i]) {
			maxs = sales[i];
			maxm = i + 1;
		}
	}
	printf("총 매출 : %d \n최대 매출 :%d월, %d",total, maxm, maxs);

	return 0;
}