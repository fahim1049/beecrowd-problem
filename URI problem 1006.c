#include<stdio.h>
int main()
{double A, B, C, AVG;
scanf("%lf%lf%lf", &A , &B, &C);

AVG = ((A * 2) + (B * 3) + (C * 5)) / (2 + 3 + 5);
printf("MEDIA = %.1lf\n", AVG);
	return 0;
}
