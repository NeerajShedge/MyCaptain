#include<stdio.h>
#include<stdbool.h>
main(){
	int a, b;
	bool funny;
	printf("Enter two space-separated numbers: ");
	scanf("%d", &a);
	scanf("%d", &b);
	funny = a>b;
	printf("%d is funnier than %d.", funny?a,b:b,a);
	return 0;
}
