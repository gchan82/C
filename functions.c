#include<stdio.h>

void sayHi(char name[], int age){
	printf("Hello %s. You are %d years old.", name, age);
}

int main(){


	sayHi("Mike", 23);
	return 0;
}


