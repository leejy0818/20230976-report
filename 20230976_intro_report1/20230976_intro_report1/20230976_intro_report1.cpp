#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));
	float avg = 0;
	int grade[10];

	/*for (int i = 0; i < 10; i++) {
		printf("%d번째 학생 점수 입력 : ", i+1);
		scanf("%d", &grade[i]);
		avg = avg + grade[i];
	}*/

	for(int i = 0; i < 10; i++) {
		grade[i] = rand() % 100 + 1;
		avg = avg + grade[i];
		printf("%d번째 = %d, 합산 = %f\n", i + 1, grade[i], avg);
	}

	avg = avg / 10;

	printf("전체 평균 점수 : %f", avg);

	return 0;
}