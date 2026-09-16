/*
author: Ryan Machis
reg number: bcs-05-0526/2026
description: finding the surface area and volume of a cylinder
version: 1
*/

#include <stdio.h>
#include <math.h>

int main(){
	float r ;
	double h, volume, surface_area ;
	
	
	printf("Enter r: \t");
	scanf("%f", &r);
	
	printf("enter h: \t");
	scanf("%lf", &h);
	
	volume = (M_PI*r*r*h);
	surface_area = ((2*M_PI*r*r) + (2*M_PI*r*h));
	
	printf("Volume of cylinder is %lf \n", volume);
	printf("Surface_area of cylinder is %lf \n", surface_area);
	
	return 0;
	
	
	
}