#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	int sumTwo(int a, int b){
		return a+b;
	}
	
	int square(int x){
		return x*x;
	}
	int get_max(int a, int b){
		return (a>b) ? a:b;
	}
	
	int main() {
		int num1, num2;
	
	
	printf("Enter the integers: ");
	scanf("%d %d", &num1, &num2);
	
	int sum = sumTwo(num1, num2);
	int max = get_max(num1, num2);
	
	printf("Result - Sum:%d, Square: %d, Max: %d", sum,square(num1), max);
	
	
	return 0;
}