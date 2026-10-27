/* 
author: Ryan Machis
adm no; bcs-05-0549/2026
description: hotal revenue system
version : 1
*/

#include <stdio.h>

int main(){
	float revenue[7], sum;
	int i;
	
	printf("Enter revenue for 7 days: ");
	
	sum = 0;
	
	for(i=0;i<7;i++){
		scanf("%f", &revenue[i]);
		sum += revenue[i];
	}
	
	float average = sum/7;
	
	printf("The total weekly revenue is: %.2f \n", sum);
	printf("The average weekly revenue is: %.2f", average);
	
	return 0;
	
}