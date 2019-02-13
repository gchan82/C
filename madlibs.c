#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
	char color[20], pluralNoun[20], celebrityf[20], celebrityl[20];

	printf("Enter a color: \n");
	scanf("%s", color);
	printf("Enter a plural noun: \n");
	scanf("%s", pluralNoun);
	printf("Enter a celebrity: ");
	scanf("%s%s", celebrityf, celebrityl);

	
	printf("Roses are %s \n", color);
	printf("%s are blue \n", pluralNoun);
	printf("I love %s %s", celebrityf, celebrityl);

	return 0;
}
