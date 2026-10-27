/*
name: Ryan Machis Moguche
reg No: bcs-05-0549/2026
description: hotel occupancy across many branches with random assignment
version: 1
*/

#include<stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int chain[3][5][10];
	int i,j,k;
	
	srand(time(NULL));
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
				chain[i][j][k] = rand() %2;
			}
		}
	}
	int occupied = 0;
	
	for(i=0;i<3;i++){	
		for(j=0;j<5;j++){
			for(k=0;k<10;k++){
				if(chain[i][j][k]==1){
				occupied += 1;
				}
			}
		}
	}
	
	printf("the total number of occupied rooms are: %d \n", occupied);
	
	return 0;
}