#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char a[100];
	char b[100];	
	char c[100];
	
	printf("input a word :");
	scanf("%s",&a);
	
	printf("input a word :");
	scanf("%s",&b);
	
	printf("input a word :");
	scanf("%s",&c);
	
	FILE *sample=NULL;
	sample = fopen("sample.txt","w");
	
	if(sample==NULL){
		printf("file is not opened.\n");
		
		return;
		}
		
	else{
		fprintf(sample,"%s\n",a);
		fprintf(sample,"%s\n",b);
		fprintf(sample,"%s\n",c);
		
		fclose(sample);}
	
}
