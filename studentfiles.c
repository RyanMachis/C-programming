/*
name: Ryan Machis
adm no: BCS-05-0549/2026
description: files for stpring student details
version: 1
*/


#include <stdio.h>
#include <stdlib.h>

void saveStudent();
void displayStudents();
void addStudent();

int main() {
	saveStudent();
	displayStudents();
	addStudent();
	displayStudents();
	
	return 0;
}

void saveStudent() {
	FILE *fp;
	char admNo[50], name[99], course[99];
	
	fp = fopen("C:\\C_files\\files\\student.txt", "w");
	
	if(fp == NULL){
		printf("error occured! \n");
		exit(1);
	}
	
	printf("enter admission no: ");
	fgets(admNo, sizeof(admNo), stdin);
	
	printf("enter name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("enter course: ");
	fgets(course, sizeof(course), stdin);
	
	fputs(admNo, fp);
	fputs(name, fp);
	fputs(course, fp);
	
	fclose(fp);
}

void displayStudents() {
	FILE *fp;
	int ch;
	
	fp = fopen("C:\\C_files\\files\\student.txt", "r");
	
	if(fp == NULL){
		printf("error occured! \n");
		exit(1);
	}
	
	while((ch = getc(fp)) !=EOF){
		putchar(ch);
	}
	
	printf("file successfuly read! \n");
	fclose(fp);
	
}

void addStudent() {
	FILE *fp;
	char admNo[50], name[99], course[99];
	
	fp = fopen("C:\\C_files\\files\\student.txt", "a");
	
	if(fp == NULL){
		printf("error occured! \n");
		exit(1);
	}
	
	printf("enter admission no: ");
	fgets(admNo, sizeof(admNo), stdin);
	
	printf("enter name: ");
	fgets(name, sizeof(name), stdin);
	
	printf("enter course: ");
	fgets(course, sizeof(course), stdin);
	
	fputs(admNo, fp);
	fputs(name, fp);
	fputs(course, fp);
	
	fclose(fp);
}