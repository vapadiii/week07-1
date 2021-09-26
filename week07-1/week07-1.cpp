#include<stdio.h>

int main() {
	float s1, s2, s3, s4, s5, s6, s7, s8, s9, s10;
	float average;

	printf("input s1 : ");
	scanf("%f", &s1);
	printf("input s2 : ");
	scanf("%f", &s2);
	printf("input s3 : ");
	scanf("%f", &s3);
	printf("input s4 : ");
	scanf("%f", &s4);
	printf("input s5 : ");
	scanf("%f", &s5);
	printf("input s6 : ");
	scanf("%f", &s6);
	printf("input s7 : ");
	scanf("%f", &s7);
	printf("input s8 : ");
	scanf("%f", &s8);
	printf("input s9 : ");
	scanf("%f", &s9);
	printf("input s10 : ");
	scanf("%f", &s10);

	printf("s1 = %.2f\n", s1);
	printf("s2 = %.2f\n", s2);
	printf("s3 = %.2f\n", s3);
	printf("s4 = %.2f\n", s4);
	printf("s5 = %.2f\n", s5);
	printf("s6 = %.2f\n", s6);
	printf("s7 = %.2f\n", s7);
	printf("s8 = %.2f\n", s8);
	printf("s9 = %.2f\n", s9);
	printf("s10 = %.2f\n", s10);

	average = (s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10) / 10;
	printf("average height = %.2f", average);
	return 0;
}