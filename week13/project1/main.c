#include <stdio.h>
#include <stdlib.h>

struct student{
	int ID;
	char name[10];
	double grade;
};

void main(void){
	
	struct student s = {21, "MinJung", 3.2};
	
	printf("Enter ID: ");
	scanf("%d", &s.ID);
	
	printf("Enter name: ");
	scanf("%s", s.name);
	
	printf("Enter grade: ");
	scanf("%lf", &s.grade);
	
	printf("ID: %d\n", s.ID);
	printf("name: %s\n", s.name);
	printf("grade: %f\n", s.grade);
	
}