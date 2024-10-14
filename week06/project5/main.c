#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y;
	char c;
	
	printf("Enter the calculation: ");
	scanf("%d %c %d",&x,&c,&y);
	
	switch (c){
		case '+':
			printf("=%d\n",x+y);
			break;
			
		case '-':
			printf("=%d\n", x-y);
			break;
			
		case '*':
		    printf("=%d\n", x*y);
		    break;
		
		case '/':
			if (y != 0) {
				printf("=%d\n", x / y);
			} else{
				printf("Error\n");
			}
			break;
			
		default:
			printf("Error\n");
			break;
    }
	return 0;
}