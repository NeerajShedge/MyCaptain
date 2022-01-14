#include<stdio.h>
#include<stdbool.h>
main(){
	int age;
	char name[30];
	printf("What's your name? ");
	scanf("%s", name);
	printf("And your age?");
	scanf("%d", &age);
	printf("You're %s and you're %d years old.", name, age);
	return 0;
}
	
