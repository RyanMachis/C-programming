#include <stdio.h>
#include <math.h>

float calculateTotal(float num1, float num2, float num3){
	return num1+num2+num3;
}

float calculateAverage(int totalMarks){
	return totalMarks/3;
}

void displayResult(float averageMark){
	if(averageMark>=50){
		printf("Student has passed \n");
	} else
	{
		printf("Student has failed \n");
	}
	
}

int main(){
	float m1,m2,m3;
	
	printf("Enter marks for subject 1: \t");
	scanf("%f", &m1);
	
	printf("Enter marks for subject 2: \t");
	scanf("%f", &m2);
	
	printf("Enter marks for subject 3: \t");
	scanf("%f", &m3);
	
	float total = calculateTotal(m1,m2,m3);
	float average = calculateAverage(total);
	
	printf("Total marks is: %.2f \n", total);
	printf("The average marks is: %.2f \n", average);
	displayResult(average);
	
	return 0;
}