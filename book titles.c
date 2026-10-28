/*
name: Ryan Moguche
refNo: bcs-05-0549/2026
descirption: c file for storing titles of books without deleting
version: 1

*/



#include<stdio.h>
#include<stdlib.h>

int  main(){
	FILE *fptr;
	char book_title[99];
	
	fptr = fopen("C:\\C_files\\files\\borrowed_books.txt", "a");
	
	if(fptr==NULL){
		printf("error occured!");
		exit(1);
	}
	
	printf("Enter books title: ");
	fgets(book_title, sizeof(book_title), stdin);
	
	fprintf(fptr, "%s", book_title);
	
	fclose(fptr);
	
	return 0;
	
}