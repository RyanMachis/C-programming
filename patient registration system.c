
/*
name: Ryan Machis
adm no: BCS-05-0549/2026
description: strcuture for a patient registration system
version: 1
*/

#include <stdio.h>
#include <string.h>

struct patient {
	int ID;
	char name[50];
	int age;
	float temperature;
    int	DaysAdmitted;
	
}p1;

int main (){
	struct patient p1;
	
	printf("enter ID: ");
	scanf("%d", &p1.ID);
	
    while(getchar() != '\n');
	printf("enter full name: ");
    fgets(p1.name, sizeof(p1.name), stdin);
	p1.name[strcspn(p1.name, "\n")] = '\0';
	
	printf("enter age: ");
	scanf("%d", &p1.age);
	
	printf("Enter body temp: ");
	scanf("%f", &p1.temperature);
	
	printf("number of days admitted: ");
	scanf("%d", &p1.DaysAdmitted);
	
	float cost = 2500*p1.DaysAdmitted;
	
	printf("patient name: %s\n", p1.name);
	printf("patient ID: %d\n", p1.ID);
	printf("patient is %d yrs old \n", p1.age);
	printf("patient's bosy temperature is %.2f 'C\n", p1.temperature);
	printf("patient admitted for %d days\n", p1.DaysAdmitted);
	printf("total cost for accommodation is %.2f\n", cost );
	
	
	return 0;
}