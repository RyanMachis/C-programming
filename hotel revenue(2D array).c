/* 
author: Ryan Machis
adm no; bcs-05-0549/2026
description: hotal revenue system
version : 1
*/

#include <stdio.h>

int main(){
	int occupancy[5][10]={
	{1,0,1,0,0,1,0,1,0,1},
	{1,0,1,0,0,1,0,1,0,1},
	{1,0,1,0,0,1,0,1,0,1},
	{1,0,1,0,0,1,0,1,0,1},
	{1,0,1,0,0,1,0,1,0,1},
    };
    
    int i,j;
    
    for(i=0;i<5;i++){
    int	occupied=0,vacant=0, floor = i+1;
    
		for(j=0;j<10;j++){
			if(occupancy[i][j] ==1){
				occupied += 1;
			}
			else if(occupancy[i][j] == 0)
			{
				vacant += 1;
			}
			
		}
		printf("The number of occupied rooms in floor %d is %d and vacant are %d \n", floor,occupied, vacant);
		
	}
	
    return 0;
}