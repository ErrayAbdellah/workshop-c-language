/*
 Ecrivez un programme qui demande la température en Fahrenheit et la
 transforme en degré Celsius La formule :
F = (C*1.8)+32
*/


#include<stdio.h>

int main(){
	
	float f , c;
	
	
	printf("Entrez  la température en Fahrenheit : " );
	scanf("%f",&f);
	
	
	c = (f-32)/1.8;
	
	
	printf("  la température en Celsius %f",c);
	
	return 0;
}
