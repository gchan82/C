#include<stdio.h>

int main(){

	char line[255];

	FILE *fpointer = fopen("employees.txt", "r");

	fgets(line, 255, fpointer); // storeWhere?, size, storeWhat?
				    // fgets: gets 1 line of file.
	fgets(line, 255, fpointer); // gets 2nd line of file.

	printf("%s",line);

	//fprintf(fpointer, "\nKelly, Customer Service");	


	fclose(fpointer);

	return 0;

}
