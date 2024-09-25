#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void)
 {
 	int a,b; //input
 	float c; 
 	
 	printf("enter two integers :");
 	scanf("%d, %d", &a,&b);
 	
 	if (b == 0) {
        printf("Error\n");
    } 
	else {
 	c=(float)a/b;
 	printf("%d.000000 / %d.000000 = %.6f\n", a,b,c);
    } 
 
	return 0;
}