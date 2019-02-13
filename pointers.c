#include<stdio.h>

int main(){


	int age = 10;
	int * pAge = &age;
	double gpa = 3.4;
	double *pGpa = &gpa;
	char grade = 'A';
	char *pGrade = &grade;

	printf("age's (memory address of pointer): %p \n", &age);
	printf("dereference (%p, *pAge): %p \n", *pAge);
	printf("dereference (get actual value at address): %d \n", *pAge);
	printf("dereference &age (another memory address?): %d \n", &age);
	printf("dereference *&age (get actual value at address): %d \n", *&age);
	return 0;
}
