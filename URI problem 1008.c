#include<stdio.h>
int main()
{int num, work_hour;
double salary_per_hour, total_salary;
scanf("%d %d %lf", &num, &work_hour, &salary_per_hour);
total_salary = work_hour * salary_per_hour;
printf("NUMBER = %d\n", num);
printf("SALARY = U$ %.2lf\n", total_salary);
		return 0;
}
