#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number;
	int answer=50;
	int trials=0;
	
	//do-while 
	do {
	    printf("Guess a number: ");
	    scanf("%d", &number);
	    trials++;
	    
	    if(number>answer){
	    	printf("High!\n");
		} else if (number< answer){
			printf("Low!\n");
		}else{
			printf("Congratulation! Trials : %d", trials);
		}
	}while ( number != answer);
	
	return 0;
}