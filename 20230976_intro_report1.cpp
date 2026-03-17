#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int avg = 0;
	int grade[10];

	for (int i = 0; i < 10; i++) {
		printf("%d번째 학생 점수 입력 : ", i+1);
		scanf("%d", &grade[i]);
		avg = avg + grade[i];
	}
	avg = avg / 10;

	printf("전체 평균 점수 : %d", avg);

	return 0;
}